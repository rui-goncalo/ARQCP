#include <stdio.h>
#include "asm.h"

char* a = "1";
char* b = "1";

int main(void) {
	printf("%d\n\n", test_equal(a, b));
	return 0;
}
