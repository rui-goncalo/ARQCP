#include <stdio.h>
#include "asm.h"

int vec[100] = {1,2,3,4,5};
int* ptrvec = vec;
int num = 5;

int main(void) {
	printf("%d\n", count_seq());
	return 0;
}
