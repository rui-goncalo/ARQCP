#include <stdio.h>
#include "asm.h"

int num1 = -5;
int num2 = -48;

int main(void) {
	int res = modulus();
	printf("calculator = %d\n", res);
	return 0;
}
