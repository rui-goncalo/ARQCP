#include <stdio.h>
#include "asm.h"

long num = -100;

int main(void) {
    long result = steps();
    printf("Steps: %ld\n", result);
    return 0;
}