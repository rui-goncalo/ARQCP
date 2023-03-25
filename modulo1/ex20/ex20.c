#include "ex20.h"
#include <stdio.h>

void find_all_words(char* str, char* word, char** addrs){
    int addressCount = 0;
    int wordLen = 0;
    char* wordP = word;

    while(*wordP != '\0'){
        wordLen++;
        wordP++;
    }

    if(wordLen == 0) {
        return;
    }

    while (*str != '\0'){
        if(*str == *word){
            for (int i = 0; i < wordLen; i++) {
                if(*(str+i) != *(word+i)){
                    break;
                }

                if(*(str+i) == *(word+i) && i == wordLen - 1){
                    addressCount++;
                    *addrs = str;
                    addrs++;
                }
            }
        }
        str++;
    }

    printf("Number of occurrences: %d\n", addressCount);
}