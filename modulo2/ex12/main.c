#include <stdio.h>
#include "asm.h"

int A = -4;
int B = 2;

int main(void) {
    int result = isMultiple();

    if(result == 0) {
        printf("Is not multiple.");
    } else {
    printf("Is multiple.");
    }
    return 0;
}