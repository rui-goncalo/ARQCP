#include <stdio.h>
#include "asm.h"

int a = 5;
int b = 3;

int main(void) {
	printf("%d\n\n", calculate(a,b));
	return 0;
}

void print_result(char op, int o1, int o2, int res) {
	printf("%d %c %d = %d\n", o1, op, o2, res);
}
