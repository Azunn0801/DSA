//
// Created by Azunn on 7/4/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int totalWays(int m, int n) {
    int totalSteps = m - 1 + n - 1;
    return (factorial(totalSteps) / (factorial(m - 1) * factorial(n - 1))) - (factorial(bRow, bCol));
}

int main(int argc,char *argv[]) {
    int row, col, bRow, bCol;

    printf("rows: ");
    scanf("%d", &row);
    printf("\n");
    printf("cols: ");
    scanf("%d", &col);
    printf("\n");
    printf("blockedRow");
    scanf("%d", &bRow);
    printf("\n");
    printf("blockedCol");
    scanf("%d", &bCol);
    printf("\n");

    printf("%d\n", totalWays(row, col));

    return 0;
}