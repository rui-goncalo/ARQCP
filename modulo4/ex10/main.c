#include <stdio.h>
#include "asm.h"

short* p1 = (short*)2;
char val = 2;

int main(void) {
	incr(p1, val);
	return 0;
}
