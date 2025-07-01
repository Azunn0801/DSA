#include <stdio.h>
#include <stdlib.h>

int len;
int *arr = NULL;

void printMenu()    {
    printf("1. Nhập mảng (Create)\n");
    printf("2. In mảng (Read)\n");
    printf("3. Thêm phần tử vào mảng\n");
    printf("4. Xóa phần tử khỏi mảng\n");
    printf("5. Cập nhật phần tử (Update)\n");
    printf("6. Thoat\n");
}

void addArr() {
    int n;
    printf("\nNhap do dai mang: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("\nNhap gia tri arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    len = n;
}

void insertArr() {
    int insIdx, insVal;
    len++;
    arr = (int *)realloc(arr, len * sizeof(int));
    printf("\nNhap vi tri muon chen: ");
    scanf("%d", &insIdx);
    printf("\nNhap gia tri muon chen: ");
    scanf("%d", &insVal);
    for (int i = len - 2; i >= insIdx; i--) {
        arr[i + 1] = arr[i];
    }

    arr[insIdx] = insVal;

}

void deleteArr() {
    int delIdx, delVal;
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &delIdx);
    printf("\nNhap gia tri muon xoa: ");
    scanf("%d", &delVal);
    for (int i = delIdx; i < len - 1; i--) {
        arr[i] = arr[i  + 1];
    }

    len--;
    arr = (int *)realloc(arr, len * sizeof(int));
}

void updateArr() {
    int updIdx, updVal;
    printf("\nNhap vi tri muon cap nhat: ");
    scanf("%d", &updIdx);
    printf("\nNhap gia tri muon cap nhat: ");
    scanf("%d", &updVal);
}

void printArr() {
    printf("\nGia tri cua mang: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)    {
    printMenu();
    int choice;
    do {
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addArr();
                break;
            case 2:
                printArr();
                break;
            case 3:
                insertArr();
                break;
            case 4:
                deleteArr();
                break;
            case 5:


        }
    }   while (choice!= 6);
    free(arr);
    return 0;
}

