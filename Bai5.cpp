//
// Created by Azunn on 6/30/2025.
//

#include <iostream>
using namespace std;
#define n 5


int arr[n] = {5, 3, 6, 2, 9};

int main() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }   //  Có 2 vòng lặp đều chạy theo n --> Độ phức tạp O(n^2)

    printf("Arr after sort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}