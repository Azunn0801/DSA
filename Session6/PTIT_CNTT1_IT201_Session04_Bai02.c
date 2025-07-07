//
// Created by Azunn on 7/7/2025.
//
#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printRev(int n) {
    if (n < 0) {
        printf("Input khong hop le");
        exit(0);
    }
    if (n != 0) {
        printf("%d, ", fibonacci(n));
    }
    printRev(n - 1);
}

int main() {
    int n;
    scanf("%d",&n);
    printRev(n);

    return 0;
}