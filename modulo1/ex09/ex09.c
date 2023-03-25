#include "ex09.h"

int sort_without_reps(int *src, int n, int *dest){
    int count = 0;

    for(int i = 0; i < n; i++){
        *(dest + i) = *(src + i);
        count++;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(*(dest+i) < *(dest+j)){
                int temp = *(dest+j);
                *(dest+j) = *(dest+i);
                *(dest+i) = temp;
            }
        }
    }

    for (int i = 0; i < count-1; i++) {
        if(*(dest+i) == *(dest+i+1)){
            for (int j = i; j < count-1; j++) {
                *(dest+j) = *(dest+j+1);
            }
            count--;
            i--;
        }
    }

    return count;
}