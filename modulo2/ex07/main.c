#include <stdio.h>
#include "asm.h"

short s1=1;
short s2=3;

int main(void) {
	short res = crossSumBytes();
	printf("crossSumBytes = %u\n", res);
	return 0;
}
