#include <stdio.h>
#include "asm.h"

int array[] = {1,4,8,-5,2};
int *ptrvec = array;
short num = 5; 

int main(void){
	printf("Sum: %d\n", vec_sum());
	printf("\n");
	printf("Average: %d\n", vec_avg());
	return 0;
}