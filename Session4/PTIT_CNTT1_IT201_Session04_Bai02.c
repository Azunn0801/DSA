//
// Created by Azunn on 7/3/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int main() {
    int n, maxVal,  maxIdx;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0) {
            maxVal = arr[i];
        }

        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }

    printf("\n%d", maxIdx);

    free(arr);

    return 0;
}