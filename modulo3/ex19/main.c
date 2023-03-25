#include <stdio.h>
#include "asm.h"

char vec1[100] = {20,10,10,10,10,10};
char* ptrgrades = vec1;
int vec2[21] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int* ptrfreq = vec2;
int num = 6;

int main(void) {
	for(int i = 0; i < 21; i++){
		printf("%d ", vec2[i]);
	}
	printf("\n\n");
	frequencies();
	for(int i = 0; i < 21; i++){
		printf("%d ", vec2[i]);
	}
	printf("\n\n");
	return 0;
}
