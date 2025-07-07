//
// Created by Azunn on 7/7/2025.
//
#include <stdio.h>

void convertBinary(int n) {
    if (n == 0) {
        return 0;
    }

    convertBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;
    scanf("%d",&n);
    convertBinary(n);

    return 0;
}