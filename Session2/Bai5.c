//
// Created by Azunn on 7/1/2025.
//

#include <stdio.h>

int arr[] = {-1,5,-3,2,10};
int size = sizeof(arr)/sizeof(int);

int main() {
    int delIdx;
    scanf("%d", &delIdx);
    if(delIdx < 0 || delIdx >= size) {
        printf("Khong hop le\n");
        exit(1);
    } else {
        for (int i = delIdx; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        for(int i = 0; i < size - 1; i++) {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}