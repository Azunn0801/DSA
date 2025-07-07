//
// Created by Azunn on 7/7/2025.
//
#include <stdio.h>

int countWays(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}

int main() {
    int steps;
    scanf("%d", &steps);
    printf("%d", countWays(steps));

}