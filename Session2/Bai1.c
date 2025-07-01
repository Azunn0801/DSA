#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, maxnum = -999999;
    printf("Nhap vao do dai mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
        printf("\n");
        if (arr[i] > maxnum) {
            maxnum = arr[i];
        }
    }

    printf("\nSo lon nhat cua mang: %d", maxnum);

    return 0;
}