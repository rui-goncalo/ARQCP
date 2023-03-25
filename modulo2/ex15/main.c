#include <stdio.h>
#include "asm.h"

int A = 8000, B = -8000, C = 40, D = -10;

int main(void) {
	int res = compute();
	printf("compute = %d\n", res);
	return 0;
}
