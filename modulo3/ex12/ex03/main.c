#include <stdio.h>
#include "asm.h"

char str[100] = "oh morcoum, tajaver";
char str2[100] = "";
char *ptr1 = str;
char *ptr2 = str2;

int main(void){
	printf("Antes: %s\n", str);
	str_copy_porto2();
	printf("Depois: %s\n", str2);
	return 0;
}