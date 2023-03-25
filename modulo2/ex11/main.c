#include <stdio.h>
#include "asm.h"

int op1 = 5;
int op2 = 5;

int main(void) {
	char res = test_flags();
	printf("test_flags = %c\n", res);
	return 0;
}
