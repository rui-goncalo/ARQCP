#include "ex18.h"

void compress_shorts(short* shorts, int n_shorts, int* integers){
    int count = 0;
    short* shortP = (short*)integers;
    while(count < n_shorts){
        *shortP = *shorts;
        shortP++;
        shorts++;
        count++;
    }
}