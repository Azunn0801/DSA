//
// Created by Azunn on 7/9/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *arr = NULL, n;

void createArr(int *arr) {
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void insertionSort(int *arr) {
    int i, j;
    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            arr[j] = arr[j - 1];
        }
        arr[j] = arr[j];
    }
}

bool linearSearch(int *arr, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

bool binarySearch(int *arr, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return true;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int choice, find;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            createArr(arr);
            break;
        case 2:
            insertionSort(arr);
            break;
        case 3:
            scanf("%d", &find);
            if (linearSearch(arr, find) == true) {
                printf("true\n");
            }
            else {
                printf("false\n");
            }
            break;
        case 4:
            scanf("%d", &find);
            if (binarySearch(arr, find) == true) {
                printf("true\n");
            }
            else {
                printf("false\n");
            }
            break;
    }
    return 0;
}