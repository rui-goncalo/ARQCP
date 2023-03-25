#include <stdio.h>
#include "asm.h"

char vec[] = " ABBA ";
char* ptr1 = vec;

int main(void) {
	printf("String = \"%s\"\nChanges = %d\n", vec, encrypt());
	return 0;
}
