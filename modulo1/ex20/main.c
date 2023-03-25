#include <stdio.h>
#include "ex20.h"
#define MAX 16

int main() {
    char* word = "xrt";
    char* str = "aarrxrt xrt xrt xrt";
    char* addrs[MAX];

    find_all_words(str, word, addrs);

    for (int i = 0; i < MAX; i++) {
        printf("%p\n", *(addrs+i));
    }
    return 0;
}