//
// Created by Azunn on 7/20/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

#define MAX_QUEUE 100

typedef struct {
    char *name;
}   Customer;

typedef struct {
    Customer *customer;
    int front, rear;
    int maxSize;
}   Queue;

void printMenu() {
    printf("1. Them khach hang moi vao hang doi\n");
    printf("2. Phuc vu\n");
    printf("3. Hien thi danh sach khac hang\n");
    printf("0. Thoat chuong trinh\n");
}

Queue *createQueue(int maxSize) {
    Queue *queue = malloc(sizeof(Queue));
    queue->front = 0;
    queue->rear = -1;
    queue->maxSize = maxSize;
    queue->customer = (Customer*)malloc(maxSize * sizeof(Customer));
    return queue;
}

bool isFull(Queue *queue) {
    return queue->rear == queue->maxSize - 1;
}

bool isEmpty(Queue *queue) {
    return queue->rear < queue->front;
}


void enqueue(Queue *queue, const char *name) {
    if (isFull(queue)) {
        return;
    }
    queue->rear++;
    queue->customer[queue->rear].name = (char*)malloc(strlen(name) + 1);
    strcpy(queue->customer[queue->rear].name, name);
}

Customer dequeue(Queue *queue) {
    Customer *customer = &queue->customer[queue->front];
    queue->front++;
    return *customer;
}

void printQueue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Danh sach khach hang trong\n");
        return;
    }
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d. %s\n",i + 1 , queue->customer[i].name);
    }
}

int main() {
    int choice;
    Queue *queue = createQueue(MAX_QUEUE);

    do {
        printMenu();
        printf("Xin moi nhap lua chon: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                char name[100];
                printf("Nhap ten khach hang: ");
                fgets(name, sizeof(name), stdin);
                name[strlen(name) - 1] = '\0';
                enqueue(queue, name);
                break;
            case 2:
                if (isEmpty(queue)) {
                    printf("Danh sach khach hang trong\n");
                }
                else {
                    printf("Da phuc vu khach hang %s", dequeue(queue));
                }
                break;
            case 3:
                printQueue(queue);
                break;
            default:
                printf("Lua chon khong hop le, nhap lai: ");
                scanf("%d", &choice);
                getchar();
        }
        Sleep(3000);
        system("cls");
    }while (choice != 0);

    for (int i = queue->front; i <= queue->rear; i++) {
        free(queue->customer[i].name);
    }
    free(queue->customer);
    free(queue);
    return 0;
}