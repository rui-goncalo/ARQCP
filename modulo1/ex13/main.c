#include <stdio.h>
#include "ex13.h"

int main() {
    int vec[32];
    char c = 'B';
    char* str = "The Number Must Be Saved";

    int count = where_is(str, c, vec);
    for (int i = 0; i < count; i++) {
        printf("Index: %d\n", vec[i]);
    }

    printf("Result: %d\n", count);
    return 0;
}