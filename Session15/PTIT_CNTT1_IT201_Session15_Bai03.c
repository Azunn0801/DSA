//
// Created by Azunn on 7/20/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool isFull(Queue *queue) {
    return queue->rear == queue->maxSize - 1;
}

bool isEmpty(Queue *queue) {
    return queue->rear < queue->front;
}

void enqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        return;
    }

    queue->rear++;
    queue->arr[queue->rear] = value;
}

int main() {
    int maxSize;
    scanf("%d", &maxSize);
    Queue *queue = createQueue(maxSize);

    for (int i = 1; i <= 5; i++) {
        enqueue(queue, i);
    }
    printf("%s", isEmpty(queue) ? "true" : "false");

    free(queue);
    return 0;
}