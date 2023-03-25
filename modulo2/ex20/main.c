#include <stdio.h>
#include "asm.h"

int num = -1;

int main(void) {
	char res = check_num();
	printf("check_num = %d\n", res);
	return 0;
}
