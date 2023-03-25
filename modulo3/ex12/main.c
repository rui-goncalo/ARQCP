#include <stdio.h>
#include "asm.h"

short vec[] = {99,100,99,100};
short* ptrvec = vec;
int num = 4;

int main(void) {
	printf("%d\n", vec_zero());
	return 0;
}
