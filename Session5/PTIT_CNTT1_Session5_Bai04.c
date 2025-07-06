//
// Created by Azunn on 7/4/2025.
//
#include <stdio.h>

int sumRange(int x, int y) {
    if (y == x) {
        return x;
    }

    return sumRange(x, y - 1) + y;
}

int main() {
    int firstNum, secondNum;
    scanf("%d %d", &firstNum, &secondNum);
    printf("%d\n", sumRange(firstNum, secondNum));

    return 0;
}