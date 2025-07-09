//
// Created by Azunn on 7/9/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int binarySearch(int *arr, int x, int n) {
    int l = 0;
    int r = n - 1;
    int m = (l + r) / 2;
    while (l <= r) {
        if (arr[m] == x) {
            return m;
        }
        if (arr[m] > x) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return -1;
}

int main() {
    int n, find;
    printf("n = ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nsearch = ");
    scanf("%d", &find);

    int res = binarySearch(arr, find, n);
    if (res == -1) {
        printf("\nKhong ton tai phan tu");
    }
    else {
        printf("\nPhan tu vi tri thu %d", res);
    }

    return 0;
}