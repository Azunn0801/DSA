//
// Created by Azunn on 7/3/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int main() {
    int n, minVal,  minIdx;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) {
            minVal = arr[i];
        }

        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
    }

    printf("\n%d", minIdx);

    free(arr);

    return 0;
}