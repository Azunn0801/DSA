//
// Created by Azunn on 7/15/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
}   Node;

Node* createNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void deleteNode(Node **node) {
    if (*node == NULL) {
        printf("Khong co Node nao trong danh sach");
        exit(0);
    }
    Node *tmp = *node;
    if (tmp->prev != NULL) {
        tmp->prev->next = NULL;
        *node = tmp->prev;
    }
    else {
        *node = NULL;
    }
    free(tmp);
}

void printList(Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        Node *newNode = createNode(data);
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
    deleteNode(&tail);
    printList(head);

    free(head);
    return 0;
}