#include <stdio.h>
#include "asm.h"

char str[] = ("Lewis Hamilton");
char *ptr1 = str;

int main(void){
    printf("String decrypted: %s\n", str);
	printf("Changes: %d\n", decrypt());
	return 0;
}