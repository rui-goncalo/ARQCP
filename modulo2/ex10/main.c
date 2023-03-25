#include <stdio.h>
#include "asm.h"

long long unsigned op1 = -2;
long long unsigned op2 = 4;

int main(void) {
    int result = sum2ints();
    printf(" %llu\n", result);
    return 0;
}