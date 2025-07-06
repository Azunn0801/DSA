//
// Created by Azunn on 7/4/2025.
//
#include <stdio.h>

int backtrack(int n) {
    if (n == 1) {
        return 1;
    }
    return n * backtrack(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", backtrack(n));

    return 0;
}
