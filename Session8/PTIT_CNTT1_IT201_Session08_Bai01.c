//
// Created by Azunn on 7/9/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int findIdx(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
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
    int res = findIdx(arr, n, find);
    if (res == -1) {
        printf("\nKhong ton tai phan tu");
    }
    else {
        printf("\nVi tri thu %d", res);
    }

}