//
// Created by Azunn on 7/2/2025.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col, maxnum, minnum;

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

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
            if (i == 0 && j == 0) {
                maxnum = arr[0][0];
                minnum = arr[0][0];
            }
            if (arr[i][j] > maxnum) {
                maxnum = arr[i][j];
            }
            if (arr[i][j] < minnum) {
                minnum = arr[i][j];
            }
        }
    }

    printf("\nmax = %d", maxnum);
    printf("\nmin = %d", minnum);

}
