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

void printQueue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("queue is empty\n");
        return;
    }

    printf("queue = {\n");
    printf("\tarray = [");
    for (int i = queue->front; i <= queue->rear; i++) {
        if (queue->rear == i) {
            printf("%d", queue->arr[i]);
        }
        else {
            printf("%d, ", queue->arr[i]);
        }
    }
    printf("],\n");
    printf("\tfront = %d,\n", queue->front);
    printf("\trear = %d,\n", queue->rear);
    printf("\tcapacity = %d\n", queue->maxSize);
    printf("}\n");
}

int main() {
    int maxSize;
    scanf("%d", &maxSize);
    Queue *queue = createQueue(maxSize);

    for (int i = 1; i <= 5; i++) {
        enqueue(queue, i);
    }
    int value;
    scanf("%d", &value);
    enqueue(queue, value);
    printQueue(queue);

    free(queue);
    return 0;
}