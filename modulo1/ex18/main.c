#include <stdio.h>
#include "ex18.h"

int main() {
    short num1[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int num2[5];

    compress_shorts(num1, 10, num2);

    return 0;
}