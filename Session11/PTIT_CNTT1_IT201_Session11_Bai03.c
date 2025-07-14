//
// Created by Azunn on 7/14/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool checkVal(Node* head, int data) {
    while (head != NULL) {
        if (head->data == data) {
            return true;
        }
        head = head->next;
    }
    return false;
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

    int find;
    scanf("%d", &find);
    printf("%s", checkVal(head, find) ? "True" : "False");
    free(head);
    return 0;
}