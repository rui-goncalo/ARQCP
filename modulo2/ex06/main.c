#include <stdio.h>
#include "asm.h"

char byte1 = 'a';
char byte2 = 'b';

int main(void) {

    short cb = concatBytes();
    printf(" %hd", cb);
    return 0;
}