#include <stdio.h>
#include "asm.h"

int x = 1;
int y = 2;
int z = 3;

int main(void) {
	printf("%d\n\n", greatest(x,y,z));
	return 0;
}
