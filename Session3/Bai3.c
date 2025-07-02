//
// Created by Azunn on 7/2/2025.
//


#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int main(int argc, char const *argv[]) {
    int n, sum = 0, div = 0;
    scanf("%d", &n);
    if (n <= 0) {
        printf("\nSo luong phan tu khong hop le");
        exit(0);
    }

    arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            div++;
        }
    }

    int avg = sum / div;

    printf("\naverage = %d", avg);
    free(arr);

    return 0;
}