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

void printArr(Node *head) {
    while (head != NULL) {
        printf("Data: %d\n", head->data);
        head = head->next;
    }
}

int main() {
    int count = 1;
    Node *head = NULL;
    while (count <= 5) {
        Node *newNode = createNode(count);
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
    printArr(head);
    free(head);
    return 0;
}