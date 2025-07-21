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

bool isEmpty(Queue *queue) {
    return queue->front == NULL;
}

Queue *createQueue() {
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    if (queue == NULL) {
        return NULL;
    }
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void enqueue(Queue *queue, int value) {
    Node *node = malloc(sizeof(Node));
    if (node == NULL) {
        printf("Them phan tu moi khong thanh cong");
        free(node);
        return;
    }
    node->data = (int *)malloc(sizeof(int));
    if (node->data == NULL) {
        printf("Them phan tu moi khong than cong");
        free(node);
        return;
    }
    *(node->data) = value;
    if (queue->front == NULL) {
        queue->front = node;
        queue->rear = node;
    }
    else {
        queue->rear->next = node;
        queue->rear = node;
    }
    node->next = NULL;
}

int peek(Queue *queue) {
    if (isEmpty(queue)) {
        return -1;
    }
    return *(queue->front->data);
}

int main() {
    Queue *queue = createQueue();
    if (queue == NULL) {
        printf("Khoi tao hang doi that bai");
    }
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);
    int peekVal = peek(queue);
    if (peekVal == -1) {
        printf("Queue is empty");
    }
    else {
        printf("%d", peekVal);
    }
    free(queue);
    return 0;
}