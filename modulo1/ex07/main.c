#include <stdio.h>
#include "ex07.h"

int main() {
    int arr[] = {1,3,5,7,9,2,4,6,8};

    printf("Before: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }

    array_sort1(arr, sizeof(arr) / sizeof(int));

    printf("\nAfter: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
