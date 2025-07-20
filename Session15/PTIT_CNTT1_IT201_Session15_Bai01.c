//
// Created by Azunn on 7/20/2025.
//
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int *arr;
    int front, rear;
    int maxSize;
}   Queue;

Queue *createQueue(int maxSize) {
    Queue *queue = malloc(sizeof(Queue));
    queue->arr = (int*)malloc(maxSize * sizeof(int));
    queue->front = 0;
    queue->rear = -1;
    queue->maxSize = maxSize;
    return queue;
}

int main() {
    Queue *queue = createQueue(MAX);

    if (queue) {
        printf("Mang da duoc tao thanh cong!");
    }

    free(queue);
    return 0;
}