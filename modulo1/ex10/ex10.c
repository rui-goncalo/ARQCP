#include "ex10.h"

int odd_sum(int *p){
    int count = 0;

    for (int i = 1; i < *(p)+1; i++) {
        if(*(p+i) % 2 != 0){
            count += *(p+i);
        }
    }

    return count;
}