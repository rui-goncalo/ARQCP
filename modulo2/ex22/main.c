#include <stdio.h>
#include "asm.h"

int i = 4;
int j = 2;

int main(void) {
	int res = f();
	printf("f = %d\n", res);
	return 0;
}
