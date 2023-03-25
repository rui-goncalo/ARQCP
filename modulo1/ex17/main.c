#include <stdio.h>
#include "ex17.h"

#define MAX 4

int main() {
    int vec1[MAX] = {1,2,3,4};
    int vec2[MAX] = {5,6,7,8};

    for (int i = 0; i < MAX; i++) {
        printf("%d | %d\n", vec1[i], vec2[i]);
    }
    swap(vec1, vec2, MAX);
    for (int i = 0; i < MAX; i++) {
        printf("%d | %d\n", vec1[i], vec2[i]);
    }

    return 0;
}