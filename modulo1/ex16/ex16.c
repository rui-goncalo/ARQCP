#include "ex16.h"
#include <stdio.h>

char* where_exists(char* str1, char* str2){
    int addressIndex = 0;
    int wordLen = 0;
    char* wordP = str1;

    while(*wordP != '\0'){
        wordLen++;
        wordP++;
    }

    if(wordLen == 0) {
        return NULL;
    }

    while (*str2 != '\0'){
        if(*str2 == *str1){
            for (int i = 0; i < wordLen; i++) {
                if(*(str2+i) != *(str1+i)){
                    break;
                }

                if(*(str2+i) == *(str1+i) && i == wordLen - 1){
                    printf("Address index: %d\n", addressIndex);
                    return str2;
                }
            }
        }
        addressIndex++;
        str2++;
    }

    return NULL;
}