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

static int nr_wp_used = 0;
/* TODO: Implement the functionality of watchpoint */
int new_wp(char* args)
{
if(nr_wp_used >= NR_WP) return false;

  if(!free_)
  {
    assert(0);
  }
  WP* node;
  node = free_;
  free_ = free_->next;

  if (head==NULL) //空链表
  {
    head = node;
    head->next = NULL;
    strcpy(head->expr,args);
    node->res = 0;
  }
  else 
  {
    WP* tmp = head;
    while(tmp->next != NULL)
      tmp = tmp->next;
    tmp->next = node;
    node->next = NULL;
    strcpy(node->expr,args);
    node->res = 0;
  }
  nr_wp_used++;
  return nr_wp_used;
}

void traverse_wp(){
  WP *itr = head;
  while(itr != NULL){
    printf("%02d\t%10s\t%-10u\n",itr->NO,itr->expr,itr->res);
    itr = itr->next;
  }
}


void free_wp(int n)
{
  if(nr_wp_used<=0) return;

  WP* wp_to_free = NULL;
  if(head->NO == n)
  {
    wp_to_free = head;
    head = head->next;
    wp_to_free->next = NULL;
  }
  else
  {
    WP* tmp = head;
    while (tmp->next != NULL)
    {
      if(tmp->next->NO == n)
      {
        wp_to_free = tmp->next;
        tmp->next = wp_to_free->next;
        wp_to_free->next = NULL;
        break;
      }
      tmp = tmp->next;
    }
    if (tmp->next == NULL) return;
  }

  wp_to_free->next = free_;
  nr_wp_used--;
}

bool watch_all()
{
  bool success = false;
  bool has_print_head = false;
  WP* tmp;
  tmp = head;
  // *tmp = *head;
  // printf("tmp:%p\nhead:%p\n",tmp,head);
  while (tmp != NULL)
  {
    word_t res = expr(tmp->expr,&success);
    if(!success) printf("The expression of watch point %d is invalid!\n",tmp->NO);
    else if (res != tmp->res)
    {
      if(!has_print_head)
      {
        printf("%-6s\t%-20s\t%-14s\t%-14s\n", "Number", "Expression", "New Value", "Old Value");
        has_print_head = true;
      }

      printf("%-6d\t%-20s\t0x%-14x\t0x%-14x\n",tmp->NO,tmp->expr,res,tmp->res);
      tmp->res = res;
      return true;
    }
    tmp = tmp->next;
  }

  return false;
}
