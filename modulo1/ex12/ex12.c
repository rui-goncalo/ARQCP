#include "ex12.h"

void capitalize (char *str){
    /*for (int i = 0; *(str+i) != '\0'; i++) {
        if(i == 0 && *(str+i) >= 'a' && *(str+i) <= 'z'){
            *(str+i) -= 32;
        }

        if(*(str+i-1) == ' ' && *(str+i) >= 'a' && *(str+i) <= 'z'){
            *(str+i) -= 32;
        }
    }*/

    if(*(str) >= 'a' && *(str) <= 'z'){
        *(str) -= 32;
    }

    str++;

    while(*str != '\0'){
        if(*(str-1) == ' ' && *(str) >= 'a' && *(str) <= 'z'){
            *(str) -= 32;
        }
        str++;
    }
}