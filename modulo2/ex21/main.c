#include <stdio.h>
#include "asm.h"

int code = 12;
int currentSalary = 1000;

int main(void) {
	int res = new_salary();
	printf("new_salary = %d\n", res);
	return 0;
}
