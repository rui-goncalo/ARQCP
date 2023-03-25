#include "ex06.h"

void power_ref(int *x, int y){
    if(y < 0){
        *x = 0;	
	}
    
    if(y == 0){
        *x = 1;
        return;
    }

    int tempX = *x;

    for (int i = 1; i < y; i++){
        *x *= tempX;
    }
}
