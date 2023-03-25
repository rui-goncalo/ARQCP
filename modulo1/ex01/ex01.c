#include "ex01.h"

void ex01(){
    int x = 5;
    int* xPtr = &x;
    float y = *xPtr + 3;
    int vec[] = {10,11,12,13};

    printf("- x = %d ||| y = %.1f\n", x, y);
    printf("- x (adress): %p ||| xPtr (adress): %p\n", &x, xPtr);
    printf("- xPtr (value): %d\n", *xPtr);
    printf("- vec (adress): %p\n", &vec);

    printf("\n- ");
    for (int i = 0; i < 4; i++) {
        printf("vec[%d] = %d   ", i, vec[i]);
    }
    printf("\n- ");
    for (int i = 0; i < 4; i++) {
        printf("vec[%d] = %p   ", i, &vec[i]);
    }
}
