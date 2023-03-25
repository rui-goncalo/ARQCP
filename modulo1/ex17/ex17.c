#include "ex17.h"

void swap(int* vec1, int* vec2, int size){
    int vecNew[size];

    for (int i = 0; i < size; i++) {
        *(vecNew+i) = *(vec1+i);
    }

    for (int i = 0; i < size; i++) {
        *(vec1+i) = *(vec2+i);
        *(vec2+i) = *(vecNew+i);
    }
}