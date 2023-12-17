/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

//======ELF=======
typedef struct 
{
  char name[256];
  Elf32_Addr value;
  Elf32_Word size;
  bool flag;
}elf_func;

elf_func func[256];
FILE *elf_fp = NULL;
FILE *elf_str = NULL;
Elf32_Shdr elf_sec;
Elf32_Off elf_sym_off;
Elf32_Off elf_str_off;

static void init_elf()
{
  if (elf_file == NULL) {
    Log("No elf is given. Use the default build-in elf.");
    return ; 
  }
  elf_fp = fopen(elf_file, "rb");
  
  Elf32_Ehdr elf32; 
  int i;
  int a,b;
  // fseek(elf_fp, 0, SEEK_SET);
  a=fread(&elf32, sizeof(Elf32_Ehdr), 1, elf_fp);
  fseek(elf_fp,elf32.e_shoff,SEEK_SET);
  for (i = 0;i < 8;i++)
  {
    b=fread(&elf_sec, sizeof(Elf32_Shdr), 1, elf_fp);
  }
  elf_sym_off = elf_sec.sh_offset;
  b=fread(&elf_sec, sizeof(Elf32_Shdr), 1, elf_fp);
  elf_str_off = elf_sec.sh_offset;
  int delta = elf_str_off - elf_sym_off;
  fseek(elf_fp,elf_sym_off,SEEK_SET);

  Assert(elf_fp, "Can not open '%s'", elf_file);
  b=0;
  Elf32_Sym elf_symbol;
  int c = 0,type;
  char func_name[256];
  char str;
  int value,size;
  int j = 0,k = 0;
  while(k < delta){
    k += sizeof(Elf32_Sym);
    b += fread(&elf_symbol,sizeof(Elf32_Sym),1,elf_fp);
    type = ELF32_ST_TYPE(elf_symbol.st_info);
    if(type == STT_FUNC) 
    {
      printf("ok");
      func[j].value = elf_symbol.st_value;
      func[j].size = elf_symbol.st_size;
      func[j].flag = false;
      fseek(elf_fp,elf_str_off+elf_symbol.st_name,SEEK_SET);
      i = 0;
      c = fread(func_name + i,sizeof(char),1,elf_fp);
      i ++;
      while(func_name[i-1] !=0 )
      {
        c = fread(func_name + i,sizeof(char),1,elf_fp);
        i++;
      } 
      sprintf(func[j++].name,"%s",func_name);
      fseek(elf_fp,elf_sym_off,SEEK_SET);
      for(i = 0; i<b;i++)
      {
        c = fread(&elf_symbol,sizeof(Elf32_Sym),1,elf_fp);
      }
  }
  }
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=ELF_FILE       input ELF FILE\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  #ifdef CONFIG_FTRACE
    init_elf();
  #endif

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

#ifndef CONFIG_ISA_loongarch32r
  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv,
      MUXDEF(CONFIG_RV64,      "riscv64",
                               "riscv32"),
                               "bad"))) "-pc-linux-gnu"
  ));
#endif

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
