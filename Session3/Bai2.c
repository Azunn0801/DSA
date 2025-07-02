//
// Created by Azunn on 7/2/2025.
//

#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

int main(void) {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("\nSo luong phan tu khong hop le");
        exit(0);
    }

    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxnum = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxnum) {
            maxnum = arr[i];
        }
    }

    printf("Max = %d", maxnum);
    free(arr);


}
