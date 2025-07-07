//
// Created by Azunn on 7/7/2025.
//
#include <stdio.h>

int backtrack(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + backtrack(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", backtrack(n));


    return 0;
}