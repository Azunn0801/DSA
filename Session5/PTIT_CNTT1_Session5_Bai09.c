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
    return factorial(totalSteps) / (factorial(m - 1) * factorial(n - 1));
}

int main(int argc,char *argv[]) {
    int row, col;
    scanf("%d %d",&row,&col);
    printf("%d\n", totalWays(row, col));

    return 0;
}