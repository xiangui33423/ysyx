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
#include <cpu/difftest.h>
#include "../local-include/reg.h"


bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for(i = 0;i < 32;i++)
  {
    
    if(ref_r->gpr[i] != gpr(i))
    {
      printf("pc is  0x%08x  error regs:%s   0x%08x   correct is 0x%08x\n",pc,reg_name(i),gpr(i),ref_r->gpr[i]);
      return false;
    }
  }
  return true;
}

void isa_difftest_attach() {
}
