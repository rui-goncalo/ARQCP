#include <stdio.h>
#include "asm.h"

int vec[] = {-1,255,-1};
char* ptrvec = (char*)vec;
int num = 3;

int main(void) {
	printf("%d\n", sum_first_byte());
	return 0;
}
