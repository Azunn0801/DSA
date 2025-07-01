//
// Created by Azunn on 7/1/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0, find;
    printf("Nhap do dai mang: ");
    scanf("%d",&n);
    printf("\n");
    printf("Nhap so can tim: ");
    scanf("%d",&find);
    printf("\n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu: ");
        scanf("%d",&arr[i]);
        if (arr[i] == find) {
            count++;
        }
    }

    printf("%d", count);



    return 0;
}