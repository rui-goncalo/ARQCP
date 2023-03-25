#include <stdio.h>
#include "asm.h"

extern int height, base;

int main(void) {
    int res = getArea();
    printf("getArea = %d\n", res);
    return 0;
}