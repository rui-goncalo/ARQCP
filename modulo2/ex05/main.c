#include <stdio.h>
#include "asm.h"

short s=5;

int main(void) {
	short res = swapBytes();
	printf("swapBytes = %d:0x%x\n", res, res);
	return 0;
}
