//
// Created by Azunn on 7/2/2025.
//

#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int main() {
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("\n");

    if (n < 1) {
        printf("So luong phan tu khong hop le");
        exit(0);
    }

    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    printf("m = ");
    scanf("%d", &m);
    printf("\n");

    if (m < 0) {
        printf("So luong phan tu khong hop le");
        exit(0);
    }

    arr = (int *)realloc(arr, (n + m) * sizeof(int));
    for (int i = n; i < n + m; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }
}
