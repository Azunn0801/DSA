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

void insertNode(Node **head, int data, int index) {
    int count = 1;
    Node *curr = *head;
    Node *newNode = createNode(data);

    if (index == 1) {
        newNode->next = *head;
        if (*head == NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
        return;
    }

    while (curr->next != NULL && count < index - 1) {
        curr = curr->next;
        count++;
    }

    if (curr == NULL) {
        printf("Vi tri vuot qua danh sach!");
        exit(1);
    }

    newNode->next = curr->next;
    newNode->prev = curr;

    if (curr->next != NULL) {
        curr->next->prev = newNode;
    }
    curr->next = newNode;
}

int main() {
    int total = 5, val, pos;
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
    printf("\nvalue: ");
    scanf("%d", &val);
    printf("\nposition: ");
    scanf("%d", &pos);
    insertNode(&head, val, pos);
    printList(head);
    free(head);

    return 0;
}