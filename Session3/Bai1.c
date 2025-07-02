//
// Created by Azunn on 7/2/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int  *arr = NULL;

int main(void) {
    int n;
    bool flag = false;
    scanf("%d", &n);
    if (n <= 0) {
        if (n == 0) {
            printf("\nSo luong phan tu phai lon hon 0");

        }
        else {
            printf("\nSo luong phan tu khong duoc am");
        }

        exit(0);
    }
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0) {
            printf("\nSo thu %d = %d", i + 1, arr[i]);
        }
    }
    free(arr);
}