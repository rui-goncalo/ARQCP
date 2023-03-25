#include <stdio.h>
#include "ex06.h"

int main() {
    int x = 2;
    int y = 6;
    printf("Before: %d\n",x);
    power_ref(&x,y);
    printf("After: %d\n",x);
    return 0;
}
