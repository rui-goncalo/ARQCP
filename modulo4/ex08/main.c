#include <stdio.h>
#include "asm.h"

int a = 3;
int* b = (int*)1;
int c = -4;

int main(void) {
	printf("%d\n\n", calc(a,b,c));
	return 0;
}
