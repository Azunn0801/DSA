//
// Created by Azunn on 7/1/2025.
//

#include <stdio.h>
#include <stdlib.h>

int arr[] = {-1,5,-3,2,10};

int main() {
    int repIdx, repVal;

    printf("position: ");
    scanf("%d",&repIdx);
    printf("\n");
    printf("value: ");
    scanf("%d",&repVal);
    printf("\n");

    arr[repIdx] = repVal;

    for(int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}