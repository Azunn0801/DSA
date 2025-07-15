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
    if (head == NULL) {
        return;
    }
    Node *temp = head;
    int counter = 0;
    while (temp != NULL) {
        counter++;
        printf("Node %d: %d\n",counter, temp->data);
        temp = temp->next;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 1; i <= n; i++) {
        int data;
        scanf("%d", &data);
        Node* newNode = createNode(data);
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