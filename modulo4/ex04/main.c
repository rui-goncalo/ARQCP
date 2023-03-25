#include <stdio.h>
#include "asm.h"

int num1 = 1;
int num2 = 2;
int* smaller;

int main(void) {
	printf("%d\n\n", sum_smaller(num1, num2, smaller));
	return 0;
}
