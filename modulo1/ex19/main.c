#include <stdio.h>
#include "ex19.h"

int main() {
    char* word = "xrt";
    char* str = "aarrxrt xrt xrt xrt";

    printf("%p\n", find_word(word, str));
    return 0;
}