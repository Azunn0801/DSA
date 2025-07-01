//
// Created by Azunn on 7/1/2025.
//

#include <stdio.h>
#include <stdlib.h>

int arrA[6], arrB[6];

int main() {
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arrA[i]);
        arrB[6-1-i] = arrA[i];
    }

    for (int i = 0; i < 6; i++) {
        printf("%d ", arrB[i]);
    }
    return 0;
}