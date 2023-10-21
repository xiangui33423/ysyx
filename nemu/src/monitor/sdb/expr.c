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
#include <memory/vaddr.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NEQ,TK_ADD,
  TK_NUM_DEC/*十进制*/,TK_NUM_HEX/*十六进制*/,
  TK_NUM_NEG /*负数*/,TK_NUM_REG/*reg*/,
  TK_GET_ADDR/*address*/,
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
  {"\\!=", TK_NEQ}, 
  {"&&", TK_ADD},
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // multiplication
  {"\\/", '/'},         // division
  {"\\(", '('},
  {"\\)", ')'},
  {"0x[0-9,a-f,A-F]+",TK_NUM_HEX},
  {"[0-9]+", TK_NUM_DEC},  
  {"\\$[rsgta$][ap0-9]|\\$[s][1][0-1]?",TK_NUM_REG},
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

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  memset(tokens,0,32);
  int position = 0;
  int i,tmp;
  regmatch_t pmatch;
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
          case '+': tokens[nr_token].type = '+';  
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case '-':   tokens[nr_token].type = '-';   
                      strncpy(tokens[nr_token++].str, substr_start, substr_len);
                      break;                    
          case '*': tokens[nr_token].type = '*';
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case '/': tokens[nr_token].type = '/'; 
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case TK_NUM_DEC:
                    tokens[nr_token].type = TK_NUM_DEC; 
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case TK_NUM_HEX:
                    tokens[nr_token].type = TK_NUM_HEX;
                    tmp = strtol(substr_start,NULL,0);
                    sprintf(tokens[nr_token++].str,"%d",tmp);
                    break;
          case '(':
                    tokens[nr_token].type = '('; 
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case ')':
                    tokens[nr_token].type = ')'; 
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case TK_ADD:
                    tokens[nr_token].type = TK_ADD; 
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case TK_EQ:
                    tokens[nr_token].type = TK_EQ; 
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;
          case TK_NEQ:
                    tokens[nr_token].type = TK_NEQ; 
                    strncpy(tokens[nr_token++].str, substr_start, substr_len);
                    break;     
          case TK_NUM_REG:
                    tokens[nr_token].type = TK_NUM_REG; 
                    strncpy(tokens[nr_token++].str, substr_start+1, substr_len-1);
                    break;                                      
          case ' ': break;
          default: 
            
            break;
        }
        printf("%d,%s\n",nr_token-1,tokens[nr_token-1].str);
        break;
      }
    }


    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

typedef struct kh
{
 bool kuohao;
 Token* q;
}kh;


kh check_parentheses(Token *p,Token *q)
{
  int a,b;
  a = b = 0;
  Token *c;
  c = p;
  Token *tmp;
  kh KH;
  while (c<=q)
  {
    if(c->type == '(') a++;
    if(c->type == ')')
    {
      b++;
      tmp = c;
    } 
    c++;
  }
  if (a == b)
  {
    KH.kuohao = true;
    KH.q = tmp;
    return KH;
  }
  KH.kuohao = false;
  return KH;
}

uint32_t eval(Token* p,Token* q)
{
  char *end;
  Token *op,*op_tmp;
  uint32_t val1,val2;
  kh KH;
  KH.kuohao = false;
  // bool kuohao = false;
  KH = check_parentheses(p,q);

  // printf("%d\n",kuohao);
  if(p>q)
  {
    printf("failed!\n");
    assert(0);
  }
  else if(p == q){

    if(p->type == TK_NUM_REG) //对地址进行处理
      return isa_reg_str2val(p->str);
    return strtol(p->str,&end,0);
  }
  else if(p+1 == q)//对二义性做处理
  {
    if (p->type == TK_NUM_NEG)
    {
      int a = strtol(q->str,&end,0);
      return -a;
    }
    if (p->type == TK_GET_ADDR)
    {
      int n;
      n = strtol(q->str, NULL, 0);
      return vaddr_read(n, 4);
    }
  }
  else if(KH.kuohao==true && p->type == '(' && q->type == ')')
  {
    return eval(p+1,q-1);
  }
  else if(KH.kuohao == false)
  {
    printf("kuohao error\n");
    assert(0);
  }
  else /*思路：先找出来所有的加减，然后在用eval递归一次，最后计算乘除*/
  { 
    op_tmp = p;
    while(op_tmp<=q)
    {
      //寻找主操作符
      if(op_tmp->type == '(')
      {
        op_tmp = KH.q;
      }
      if (op_tmp->type == '+' || op_tmp->type == '-')
      {
        op = op_tmp;
        break;
      }
      else if (op_tmp->type == '*' || op_tmp->type == '/')
      {
        op = op_tmp;
        break;
      }else if(op_tmp->type == TK_ADD)
      {
        op = op_tmp;
        break;
      }else if (op_tmp->type == TK_EQ || op_tmp->type == TK_NEQ)
      {
        op = op_tmp;
        break;
      }
      
      op_tmp++;
    }
    val1 = eval(p,op-1);
    val2 = eval(op+1,q);

    switch (op->type)
    {
    case '+': return val1 + val2;
    case '-': return val1 - val2;
    case '*': return val1 * val2;
    case '/': return val1 / val2;
    case TK_ADD: return val1 && val2;
    case TK_EQ: return val1 == val2;
    case TK_NEQ: return val1 != val2;

    default: 
      printf("fail3\n");
      assert(0);
      break;
    }
  }
}


word_t expr(char *e, bool *success) {
  bool token = make_token(e);
  if (!token) {
    *success = false;
    return 0;
  }
  *success = 1;
  int i;
  /* TODO: Insert codes to evaluate the expression. */
  for(i = 0; i < nr_token; i++)
  {
    //只做了加减法和取地址的负数匹配
    if (tokens[i].type == '-' &&(i == 0 || tokens[i-1].type == '+' || tokens[i-1].type == '-' || tokens[i-1].type == '('))
    {
      tokens[i].type = TK_NUM_NEG;
    }
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type != TK_NUM_DEC || tokens[i-1].type == '('))
    {
      tokens[i].type = TK_GET_ADDR;
    }
    
  }
  uint32_t val;
  val = eval(tokens,tokens+nr_token-1);
  printf("val:%d\n",val);
  return val;
}