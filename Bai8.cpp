//
// Created by Azunn on 6/30/2025.
//

#include <stdio.h>
#include <stdlib.h>

#define n 10
#define min -1

int arr[n] = {6, 3, 6, 3, 2, 6, 7, 4, 9, 0};
int count[n] = {0};

int countDupNum() {
    int maxnum = min;

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (count[i] > maxnum) {
            maxnum = i;
        }
    }

    return maxnum;
}

int main() {
    printf("Most duplicate number: %d", countDupNum()); // Độ phức tạp O(n + M): n và M tương ứng vòng lặp 1 và 2 trong hàm
}