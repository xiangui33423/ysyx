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

#include "sdb.h"

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].res = 1;
    wp_pool[i].expr[0] = '\0';
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
 #define _CRT_SECURE_NO_WARNINGS
WP* new_wp(char* args,word_t expr)
{
  if(!free_)
  {
    assert(0);
  }
  WP* node;
  node = free_;
  free_ = free_->next;
  node->res = expr;
  strncpy(node->expr,args,strlen(args));
  node->next = NULL;
  if (head==NULL) 
  {
    head = node;
  }
  else 
  {
    node->next=head;
    head=node;
  }
  return node;
}

void free_wp(WP* wp)
{
  if(!wp)
    return;
  
  int i,j;
  WP* tmp = head;
  //find wp where 
  for(i = 0;tmp;tmp=tmp->next,i++)
  {
    if (tmp == wp)
    {
      break;
    }
  }
  
  //delete wp
  if (!tmp)
  {
    return;
  }
  if(i==0)
    head = head->next;
  else{
    tmp = head;
    for ( j = 0; j < i-1; j++)
    {
      tmp=tmp->next;
    }

    tmp->next = (tmp->next)->next;
  }

  wp->next = free_;
  free_ = wp;
}

