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

int getLength(Node *head) {
    int length = 0;
    Node *curr = head;
    while (curr != NULL) {
        length++;
        curr = curr->next;
    }
    return length;
}

void findMiddle(Node *head, int *pos, int *val) {
    int count = 0;
    int len = getLength(head) / 2 + 1;
    if (head == NULL) {
        *pos = 0;
        *val = 0;
        return;
    }
    if (head->next == NULL) {
        *pos = 0;
        *val = head->data;
        return;
    }
    while (head != NULL) {
        count++;
        if (len == count) {
            *pos = count;
            *val = head->data;
            return;
        }
        head = head->next;
    }
}

void printMiddle(int pos, int val) {
    printf("Node %d: %d\n", pos, val);
}

int main() {
    int n, pos = 0, val = 0;
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

    findMiddle(head, &pos, &val);
    printMiddle(pos, val);

    free(head);
    return 0;
}