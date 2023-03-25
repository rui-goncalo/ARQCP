#include <stdio.h>
#include "asm.h"

int num = 0;
long vec[] = {0};
long* ptrvec = vec;

int main(void) {
	for(int i = 0; i < num; i++){
		printf("%ld\n", vec[i]);
	}
	vec_add_one();
	for(int i = 0; i < num; i++){
		printf("%ld\n", vec[i]);
	}
	return 0;
}
