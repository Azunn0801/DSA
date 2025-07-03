#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *arr = NULL, n, find;

int main(void) {
    bool flag = false;

    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf(" %d", &find);
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == find) {
            printf("\n%d", i);
            flag = true;
            break;
        }
    }

    if (!flag) {
        printf("\nKhong tim thay phan tu");
    }

    free(arr);
    return 0;
}