//
// Created by Azunn on 6/30/2025.
//
#include <stdio.h>
#include <stdlib.h>
#define n 10

int arr[n] = {6, 3, 6, 3, 2, 6, 7, 4, 9, 0};

bool checkloopA() { //  Cách 1
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

bool checkloopB() { //  Cách 2 (giả sử mảng đã được sắp xếp):
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }   //  Phần sắp xếp

    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }

    return false;
}

int main() {
    if (checkloopA()) {
        printf("Duplicate numbers exist\n");
    }   //  lặp 2 vòng theo n --> O(n^2)
    if (checkloopB()) {
        printf("Duplicate numbers exist\n");
    }    // Không tính phần sắp xếp --> vòng lặp chạy theo n --> O(n)
}