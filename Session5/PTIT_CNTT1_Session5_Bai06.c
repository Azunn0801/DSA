//
// Created by Azunn on 7/4/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int sumArr(int *arr, int n) {
    if (n == 0) return 0;
    return sumArr(arr, n - 1) + arr[n - 1];

}

int main() {
    int n;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", sumArr(arr, n));

    free(arr);

    return 0;
}