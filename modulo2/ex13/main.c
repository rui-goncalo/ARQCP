#include <stdio.h>
#include "asm.h"

int base = 6;
int height = 6;

int main(void) {
	int res = getArea();
	printf("getArea = %d\n", res);
	return 0;
}
