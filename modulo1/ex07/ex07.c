#include "ex07.h"

void array_sort1(int *vec, int n){
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(vec[i] < vec[j]){
                int temp = vec[j];
                vec[j] = vec[i];
                vec[i] = temp;
            }
        }
    }
}
