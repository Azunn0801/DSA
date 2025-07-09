//
// Created by Azunn on 7/9/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    if (n < 0) {
        printf("So luong phan tu khong hop le");
        exit(0);
    }
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}