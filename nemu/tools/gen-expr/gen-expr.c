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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <time.h>

// this should be enough
static char buf[60000] = {};
static char code_buf[65536] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}\n";

//生成比n小的随机数
uint32_t choose(uint32_t n)
{
  uint32_t a;
  a = rand()%n;
  return a;
}

static int cnt = 0;

static void gen_rand_op()
{
  uint32_t n;
  n = choose(4);
  switch (n)
  {
  case 0:
    sprintf(buf+cnt,"%c",'+');
    break;
  case 1:
    sprintf(buf+cnt,"%c",'-');
    break;
  case 2:
    sprintf(buf+cnt,"%c",'*');
    break;
  case 3:
    sprintf(buf+cnt,"%c",'/');
    break;
  default:sprintf(buf+cnt,"%c",'+');
    break;
  }
  cnt++;
}


static void gen_num()
{
  int i = choose(100);
  if (buf[cnt-1]== '/')
  {
      while(!i)
      {
        i = choose(100);
      }
  }
  sprintf(buf+cnt,"%d",i);
  while ((buf[cnt]))
  {
    cnt++;
  }
  
}

static void gen(char x)
{
  sprintf(buf+cnt,"%c",x);
  cnt++;
}


static void gen_rand_expr() {
  int i = choose(3);

    if(cnt>20) i=0;
    switch (i)
      {
      case 0: gen_num();break;

      case 1: gen('(');gen_rand_expr();gen(')');break;

      default:gen_rand_expr();
              gen_rand_op();
              gen_rand_expr();
              break;
      }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }

  int i;
  for (i = 0; i < loop; i ++) {
    strcpy(buf,"");
    cnt = 0;
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);
    // 	if (ret != 1) {
		// 	// waste a single loop, generate a new one.
		// 	--i;
		// 	continue;
		// }
    printf("%d %s\n", result, buf);

  }
  return 0;
}
