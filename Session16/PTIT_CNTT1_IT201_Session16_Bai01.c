//
// Created by Azunn on 7/21/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *data;
    struct Node *next;
}   Node;

typedef struct {
    Node *front;
    Node *rear;
}   Queue;

Queue *createQueue() {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    if (queue == NULL) {
        return NULL;
    }
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

int main() {
    Queue *queue = createQueue();
    if (queue == NULL) {
        printf("Khoi tao hang doi that bai");
    }

    free(queue);
    return 0;
}