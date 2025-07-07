//
// Created by Azunn on 7/7/2025.
//
#include <stdio.h>
#include <stdlib.h>

void HaNoiTower(int plates, char from, char between, char to) {
    if (plates == 0) {
        printf("Input khong hop le");
        exit(0);
    }
    if (plates == 1) {
        printf("Dia %d di chuyen tu %c sang %c\n", plates, from, to);
        return;
    } else {
        HaNoiTower(plates - 1, from, to, between);
        printf("Dia %d di chuyen tu %c sang %c\n", plates, from, to);
        HaNoiTower(plates - 1, between, from, to);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    HaNoiTower(n, 'A', 'B', 'C');

    return 0;
}