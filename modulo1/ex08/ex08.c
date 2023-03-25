#include "ex08.h"

void array_sort2(int *vec, int n){
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(*(vec+i) < *(vec+j)){
                int temp = *(vec+j);
                *(vec+j) = *(vec+i);
                *(vec+i) = temp;
            }
        }
    }
}
