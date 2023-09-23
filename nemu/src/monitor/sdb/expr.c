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
#include <stdbool.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <string.h>

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NUM_DEC,TK_NUM_HEX,
  /* TODO: Add more token types */
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // multiplication
  {"\\/", '/'},         // division
  {"\\(", '('},
  {"\\)", ')'},
  {"[0-9]+", TK_NUM_DEC},
  {"0x[0-9]+",TK_NUM_HEX},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[2][32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

typedef struct
{
	char data[32];
	int top;
}SqStack;

bool StackEmpty(SqStack S)
{
	if (S.top == -1)   //栈空
		return true;
	else
		return false;  //栈不空
}

bool Pop(SqStack* S, char* x)
{
	if (S->top == -1)              //栈空 不能执行出栈操作
		return false;
	x = &S->data[S->top];            //先出栈 指针再减1
	S->top--;
	return true;
}

bool Push(SqStack* S, char x)
{
	if (S->top == 32 - 1)      //栈满 不能执行入栈操作
		return false;
	S->top++;                      //指针先加1，再入栈
	S->data[S->top] = x;
	return true;
}

bool GetPop(SqStack S, char* x)
{
	if (S.top == -1)            //栈空报错
		return false;
	x = &S.data[S.top];          //用x存储栈顶元素
	return true;
}

void initStack(SqStack* S)
{
	S->top = -1;   //初始化栈顶指针
}


static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  int tag = 0;
  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        
        switch (rules[i].token_type) {
          case '+': tokens[tag][nr_token].type = '+';  
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;

          case '-': tokens[tag][nr_token].type = '-';   
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;
          case '*': tokens[tag][nr_token].type = '*';
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;
          case '/': tokens[tag][nr_token].type = '/'; 
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;
          case TK_NUM_DEC:
                    tokens[tag][nr_token].type = TK_NUM_DEC; 
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;
          case TK_NUM_HEX:
                    tokens[tag][nr_token].type = TK_NUM_HEX; 
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;
          case '(':
                    tokens[tag][nr_token].type = '('; 
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;
          case ')':
                    tokens[tag][nr_token].type = ')'; 
                    strncpy(tokens[tag][nr_token++].str, substr_start, substr_len);
                    break;
          case ' ': break;
          default: 
            
            break;
        }
        printf("%d,%s\n",nr_token-1,tokens[tag][nr_token-1].str);
        break;
      }
    }

    if (nr_token == 32)
    {
      nr_token = 0;
      tag = ~tag;   
    }



    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}




bool check_parentheses(Token *p,Token *q)
{
  SqStack s;
  initStack(&s);
  while (p<=q)
  {
    if (!strcmp(p->str,"("))
    {
      Push(&s,*p->str);
      p++;
    }
    else 
    {
      char getpop;
      GetPop(s,&getpop);
      if (getpop == '(' && !strcmp(p->str,"("))
      {
        char pop;
        Pop(&s,&pop);
        p++;
      }
      else
      {
        return false;
      }
    }
    
  }
  if (StackEmpty(s))
  {
    return true;
  }
  else
    return false;
  
  return false;
}

uint32_t eval(Token* p,Token* q)
{
  if(p>q)
  {
    printf("failed!\n");
    assert(0);
  }
  else if(p == q){
    char *end;
    return strtol(p->str,&end,0);
  }
  else if(check_parentheses(p,q)==true)
  {
    return eval(p+1,q-1);
  }
  else{
    return 2;
  }
  return 0;
}


word_t expr(char *e, bool *success) {
  bool token = make_token(e);
  if (!token) {
    *success = false;
    return 0;
  }
  *success = 1;
  /* TODO: Insert codes to evaluate the expression. */
  
  return 0;
}