#include <stdio.h>
#include "ex12.h"

int main() {
    char str[] = "The number must be saved";

    printf("%s\n", str);
    capitalize(str);
    printf("%s\n", str);

    return 0;
}