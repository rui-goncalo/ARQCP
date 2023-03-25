#include <stdio.h>
#include "asm.h"

int vec[] = {-1,1,-1,1};
int* ptrvec = vec;
unsigned short num = 4;

int main(void) {
	for(int i = 0; i < num; i++){
		printf("%d\n", vec[i]);
	}
	keep_positives();
	for(int i = 0; i < num; i++){
		printf("%d\n", vec[i]);
	}
	return 0;
}
