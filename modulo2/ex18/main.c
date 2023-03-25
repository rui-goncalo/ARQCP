#include <stdio.h>
#include "asm.h"

int i = 1;

int main(void) {
	long res = func();
	printf("func = %ld\n", res);
	return 0;
}
