//
// Created by Azunn on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    printf("\n");
    return newNode;
}

void insertNode(Node **head, int data, int index) {
    Node *newNode = createNode(data);

    if (index == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node *tmp = *head;
    int count = 1;
    while (tmp != NULL && count < index - 1) {
        tmp = tmp->next;
        count++;
    }
    if (tmp != NULL) {
        newNode->next = tmp->next;
        tmp->next = newNode;
    }   else {
        printf("No more nodes\n");
        free(newNode);
        exit(1);
    }
}

void printArr(Node *head) {
    while (head != NULL) {
        printf("Data: %d\n", head->data);
        head = head->next;
    }
}

int main() {
    int count = 0, data;
    Node *head = NULL;
    while (count < 5) {
        printf("Enter data: ");
        scanf("%d", &data);
        Node *newNode = createNode(data);
        count++;
        if (head == NULL) {
            head = newNode;
        }
        else {
            Node *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    int val, idx;

    printf("value: ");
    scanf("%d", &val);
    printf("position: ");
    scanf("%d", &idx);

    insertNode(&head, val, idx);
    printArr(head);
    free(head);
    return 0;
}
