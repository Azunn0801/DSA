//
// Created by Azunn on 6/30/2025.
//

#include <iostream>
#define n 10

using namespace std;

int arr[n] = {6, 3, 6, 3, 2, 6, 7, 4, 9, 0};

int main() {
    int f, count = 0;
    printf("Enter number: ");
    scanf("%d", &f);
    printf("\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] == f) {
            count++;
        }   // 1 vòng lặp chạy theo n --> Độ phức tạp O(n)
    }

    if (count > 0) {
        printf("%d appeared %d times\n", f, count);
    } else {
        printf("%d is not exist in the arr", f);
    }
}