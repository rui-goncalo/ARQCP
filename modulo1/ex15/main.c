#include <stdio.h>
#include "ex15.h"
#define LIMIT 20
#define MAX 100

int main() {
    int vec[MAX];
    populate(vec, MAX, LIMIT);

    for (int i = 0; i < MAX-2; i++) {
        if(check(*(vec+i), *(vec+i+1), *(vec+i+2))){
            inc_nsets();
        }
    }

    printf("%d", get_nsets());
    return 0;
}