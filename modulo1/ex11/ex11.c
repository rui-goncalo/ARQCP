#include "ex11.h"

int palindrome(char *str) {
    int count = 0;
    char newStr[64] = "";

    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *(newStr + count++) = *str;
        }
        else if (*str >= 'A' && *str <= 'Z') {
            *(newStr + count++) = *str + 32;
        }
        str++;
    }

    if (count == 0) {
        return 0;
    }

    if (count % 2 == 0) {
        for (int i = 0; i < count - 1 && i < count - 1 - i; i++) {
            if (*(newStr + i) != *(newStr + count - 1 - i)) {
                return 0;
            }
        }
    } else {
        for (int i = 0; i < count - 1 && i != count - 1 - i; i++) {
            if (*(newStr + i) != *(newStr + count - 1 - i)) {
                return 0;
            }
        }
    }

    return 1;
}