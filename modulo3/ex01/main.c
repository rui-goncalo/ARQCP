#include <stdio.h>
#include "asm.h"

char str[100] = "O Jo0ao tem u0ma li0ngua bonita";
char *ptr1 = str;

int main(void){
	printf("%d\n", zero_count());
	return 0;
}