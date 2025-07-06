//
// Created by Azunn on 7/4/2025.
//
#include<stdio.h>

int sum(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
    }
    else if (n < 0) {
        printf("Invalid");
    }
    else {
        printf("%d", sum(n));
    }

    return 0;
}