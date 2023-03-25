#include <stdio.h>
#include "asm.h"

short arr[] = {1,2,3,4,5};
short* vec = arr;
int n = 5;

int main(void) {
	printf("%d\n\n", count_even(vec, n));
	return 0;
}
