#include <stdio.h>
#include "ex16.h"

int main() {
    char* str1="first";
    char* str2="The first string";

    printf("%p\n", where_exists(str1, str2));
    return 0;
}