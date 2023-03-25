#include <stdio.h>
#include "asm.h"

extern short s1, s2;

int main(void) {
    short r = crossSumBytes();
    printf(" %hd", r);
    return 0;
}