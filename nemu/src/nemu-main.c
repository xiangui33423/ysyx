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

#include <common.h>
#include "./monitor/sdb/sdb.h"
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

void test_expr() {
	int cnt = 0;
	for (char *str; (str = rl_gets()) != NULL; ) {
		char *result = strtok(str, " ");
		char *expression = result + strlen(result) + 1;
		uint64_t a, b;
		int ret = sscanf(result, "%lu", &a);
		if (ret != 1) assert(0);
		bool success = true;
		b = expr(expression, &success);
		assert(success);
		// printf("%s", expression);
		if (a == b) {
			printf("OK. Loop %d.\n", ++cnt);
		} else {
			printf("Error. Loop %d, while a = %ld, b = %ld.\n", ++cnt, a, b);
			break;
		}
	}
}

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  test_expr();
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
