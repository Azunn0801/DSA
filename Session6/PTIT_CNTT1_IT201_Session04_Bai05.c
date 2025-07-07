//
// Created by Azunn on 7/7/2025.
//
#include <stdio.h>
#include <stdlib.h>

void findMinMax(int *arr, int size, int idx, int *min, int *max) {
    if (arr == NULL) {
        printf("Arr is NULL\n");
    }
    if (idx == size) {
        return;
    }
    if (arr[idx] > *max) {
        *max = arr[idx];
    }
    if (arr[idx] < *min) {
        *min = arr[idx];
    }

    findMinMax(arr, size, idx + 1, min, max);
}

int main() {
    int n, *arr = NULL;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0], max = arr[0];
    findMinMax(arr, n, 0, &min, &max);
    printf("%d, %d", min, max);

    return 0;
}