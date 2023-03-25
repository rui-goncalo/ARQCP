#include <stdio.h>
#include "asm.h"

short arr[] = {1,3,6,9,4};
short* ptrvec = arr;
short x = 2;
int num = 5;

int main(void){
    ptrvec = vec_search();
    printf("x = %d\n", *ptrvec);
	return 0;
}