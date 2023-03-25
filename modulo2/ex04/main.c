#include <stdio.h>
#include "asm.h"

int op1=1, op2=-1;

extern long op3, op4;

int main(void) {
	long resSum_v3 = sum_v3();
	printf("sum_v3 = %ld:0x%lx\n", resSum_v3, resSum_v3);
	return 0;
}
