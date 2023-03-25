#include <stdio.h>
#include "asm.h"

int op1=3, op2=1;

int main(void) {
	int resSum_v2 = sum_v2();
	printf("sum_v2 = %d:0x%x\n", resSum_v2, resSum_v2);
	return 0;
}
