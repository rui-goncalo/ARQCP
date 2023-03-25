#include <stdio.h>
#include "asm.h"

char vec1[] = {-1,2,3,4};
char vec2[] = {-10,-10,-10,-20};
char* ptr1 = vec1;
char* ptr2 = vec2;
int num = 4;

int main(void) {
	printf("\"%s\"\n\"%s\"\n", vec1, vec2);
	swap();
	printf("\"%s\"\n\"%s\"\n", vec1, vec2);
	return 0;
}
