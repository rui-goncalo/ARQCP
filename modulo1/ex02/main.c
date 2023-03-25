#include <stdio.h>
#include "ex02.h"

int main() {
    int vec1[] = {10, 11, 12, 13};
    int vec2[] = {0, 0, 0, 0};

    printf("Before: %d ||| %d ||| %d ||| %d\n", vec2[0], vec2[1], vec2[2], vec2[3]);
    copy_vec(vec1, vec2, 4);
    printf("After: %d ||| %d ||| %d ||| %d\n", vec2[0], vec2[1], vec2[2], vec2[3]);
    return 0;
}
