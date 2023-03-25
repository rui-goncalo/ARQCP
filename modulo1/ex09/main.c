#include <stdio.h>
#include "ex09.h"
#define MAX 11

int main() {
    int arr1[MAX] = {1,1,3,5,7,9,2,4,6,8,8};
    int arr2[MAX] = {};

    printf("Before: ");
    for (int i = 0; i < MAX; i++) {
        printf("%d ", arr2[i]);
    }

    int count = sort_without_reps(arr1, MAX, arr2);

    printf("\nAfter: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}