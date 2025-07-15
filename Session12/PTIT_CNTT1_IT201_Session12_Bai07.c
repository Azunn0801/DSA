//
// Created by Azunn on 7/15/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void sortNode(Node **head) {
    if (*head == NULL) {
        printf("Danh sach lien ket rong");
        exit(0);
    }
    bool swapped;
    Node *ptr;
    Node *last = NULL;

    do {
        swapped = false;
        ptr = *head;

        while (ptr->next != last) {
            if (ptr->data > ptr->next->data) {
                int tmp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = tmp;
                swapped = true;
            }
            ptr = ptr->next;
        }
        last = ptr;
    }while (swapped);
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
    sortNode(&head);
    printList(head);

    free(head);
    return 0;
}