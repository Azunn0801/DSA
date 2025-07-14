//
// Created by Azunn on 7/14/2025.
//
#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
}   Node;

Node* createNode(int data) {
    Node *temp = malloc(sizeof(Node));
    if (temp == NULL) {
        printf("Khoi tao Node that bai!\n");
        exit(1);
    }
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    return temp;
}

void printList(Node *head) {
    printf("\nDu lieu doubly linked list: ");
    if (head == NULL) {
        return;
    }
    Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int total = 5;
    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 1; i <= total; i++) {
        Node* newNode = createNode(i);
        if (head  == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    printList(head);
    free(head);

    return 0;
}