#include <stdio.h>
#include "asm.h"

long arr[] = {40,3,10,20,4};
long* ptrvec = arr;
int num = 5;

int main(void){
    printf("Number greater than 20: %d\n", vec_greater20());
	return 0;
}