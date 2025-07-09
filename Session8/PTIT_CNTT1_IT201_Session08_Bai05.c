//
// Created by Azunn on 7/9/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

void insertionSort(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
