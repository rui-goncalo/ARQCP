#include <stdio.h>
#include "asm.h"

char A = 0;
signed short B = 0;
signed int C = 0;
signed int D = 1;

int main(void) {
	long res = sum_and_subtract();
	printf("sum_and_subtract = %ld\n", res);
	return 0;
}
