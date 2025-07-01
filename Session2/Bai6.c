//
// Created by Azunn on 7/1/2025.
//

#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int main() {
    int n, insIdx, insVal;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong khoi tao duoc mang");
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nNhap vi tri: ");
    scanf("%d", &insIdx);
    printf("\nNhap gia tri: ");
    scanf("%d", &insVal);
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap nhat mang");
        exit(1);
    }
    for (int i = insIdx; i < n; i++) {
        arr[i + 1] = arr[i];
    }

    arr[insIdx] = insVal;

    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;

}