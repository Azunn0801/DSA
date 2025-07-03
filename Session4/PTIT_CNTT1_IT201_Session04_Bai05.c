//
// Created by Azunn on 7/3/2025.
//
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL, find;

void sortArray(int *arr, int n) {
    int tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

bool findValue(int n) {
    bool res = false;
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == find) {
            return true;
        }
        if (arr[m] > find) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &find);
    sortArray(arr, n);
    if (findValue(n)) {
        printf("\nPhan tu co trong mang");
    }
    else {
        printf("\nPhan tu khong co trong mang");
    }

    return 0;
}