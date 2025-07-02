//
// Created by Azunn on 7/2/2025.
//

#include <stdio.h>
#include <stdlib.h>

int arr[1000][1000];

int calc_sum(int k, int col) {
    int sum = 0;
    for (int i = 0; i < col; i++) {
        sum += arr[k][i];
    }

    return sum;
}

int main() {
    int row, col, k;

    printf("rows = ");
    scanf("%d", &row);
    printf("\n");
    printf("cols = ");
    scanf("%d", &col);
    printf("\n");

    if (row <= 0 || row > 1000) {
        printf("So hang khong hop le");
        exit(1);
    }
    if (col <= 0 || col > 1000) {
        printf("So cot khong hop le");
        exit(1);
    }
    if ((row <= 0 && col <= 0) || (row > 1000 && col > 1000)) {
        printf("So cot va so hang khong hop le");
        exit(1);
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("k = ");
    scanf("%d", &k);

    if (k > row) {
        printf("\nHang can tinh khong ton tai");
    }
    printf("\nsum = %d", calc_sum(k - 1, col));

}