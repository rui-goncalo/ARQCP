#include <stdlib.h>
#include <time.h>
#include "ex15.h"

int nsets = 0;

void populate( int *vec , int num, int limit){
    srand(time(NULL));
    for (int i = 0; i < num; i++) {
        *(vec+i) = rand() % (limit+1);
    }
}

int check ( int x, int y, int z){
    if(x < y && y < z){
        return 1;
    }
    return 0;
}

void inc_nsets(){
    nsets++;
}

int get_nsets(){
    return nsets;
}