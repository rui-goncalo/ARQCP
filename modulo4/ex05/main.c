#include <stdio.h>
#include "asm.h"

int num = 1;
int* v1 = &num;
int v2 = 2;

int main(void) {
	printf("%d\n\n", inc_and_square(v1, v2));
	return 0;
}
