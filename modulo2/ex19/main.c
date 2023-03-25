#include <stdio.h>
#include "asm.h"

short current = 0;
short desired = 10;

int main(void) {
	int res = needed_time();
	printf("needed_time = %d\n", res);
	return 0;
}
