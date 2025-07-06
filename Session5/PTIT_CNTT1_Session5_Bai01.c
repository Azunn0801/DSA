//
// Created by Azunn on 7/4/2025.
//
#include <stdio.h>

int printNum(int init, int n) {
    if (init > n) {
        return;
    }
    printf("%d", init);
    printNum(init + 1, n);
}

int main() {
    int n;
    scanf("%d ", &n);
    printNum(1, n);

    return 0;
}