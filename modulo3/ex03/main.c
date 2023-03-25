#include <stdio.h>
#include "asm.h"

char str1[32] = "vvv";
char str2[32] = "";
char* ptr1 = str1;
char* ptr2 = str2;


int main(void) {
	str_copy_porto2();
	printf("before = \"%s\"\n", str1);
	printf("after = \"%s\"\n", str2);
	return 0;
}
