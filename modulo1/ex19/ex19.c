#include "ex19.h"
#include <stdio.h>

char* find_word(char* word, char* initial_addr){
    int addressIndex = 0;
    int wordLen = 0;
    char* wordP = word;

    while(*wordP != '\0'){
        wordLen++;
        wordP++;
    }

    if(wordLen == 0) {
        return NULL;
    }

    while (*initial_addr != '\0'){
        if(*initial_addr == *word){
            for (int i = 0; i < wordLen; i++) {
                if(*(initial_addr+i) != *(word+i)){
                    break;
                }

                if(*(initial_addr+i) == *(word+i) && i == wordLen - 1){
                    printf("Address index: %d\n", addressIndex);
                    return initial_addr;
                }
            }
        }
        addressIndex++;
        initial_addr++;
    }

    return NULL;
}