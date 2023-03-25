#include <stdio.h>
#include "asm.h"

char vec[80] = "";
char* ptr1 = "bruh ";
char* ptr2 = "lol";
char* ptr3 = vec;

int main(void) {
	str_cat();
	printf("\"%s\"\n", vec);
	return 0;
}
