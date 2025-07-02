//
// Created by Azunn on 7/2/2025.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col, cheochinh = 0, cheophu = 0;
    printf("rows = ");
    scanf("%d", &row);
    printf("\n");
    printf("cols = ");
    scanf("%d", &col);
    printf("\n");

    if (row <= 0 || row > 1000) {
        printf("So hang khong hop le");
        exit(0);
    }
    if (col <= 0 || col > 1000) {
        printf("So cot khong hop le");
        exit(0);
    }
    if ((row <= 0 && col <= 0) || (row > 1000 && col > 1000)) {
        printf("So cot va so hang khong hop le");
        exit(0);
    }
    if (row != col) {
        printf("Khong ton tai duong cheo chinh");
        printf("\nKhong ton tai duong cheo phu");
        exit(0);
    }

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            scanf("%d", &arr[i][j]);
            if (i == j) {
                cheochinh += arr[i][j];
            }
            if (i + j == row - 1) {
                cheophu += arr[i][j];
            }
        }
    }

    printf("\nTong duong cheo chinh = %d", cheochinh);
    printf("\nTong duong cheo phu = %d", cheophu);

    return 0;
}
