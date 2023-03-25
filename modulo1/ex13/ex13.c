#include "ex13.h"

int where_is (char *str, char c, int *p){
    int count = 0;

    for (int i = 0; *(str+i) != '\0'; i++){
        if(*(str+i) == c){
            p[count++] = i;
        }
    }

    return count;
}