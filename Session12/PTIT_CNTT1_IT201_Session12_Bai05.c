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

void deleteNode(Node **head, int data) {
    if (*head == NULL) {
        printf("Danh sach rong");
        exit(1);
    }
    bool flag = false;
    Node *curr = *head;
    while (curr != NULL) {
        if (curr->data == data) {
            flag = true;
            Node *tmp = curr;
            if (curr->prev == NULL) {
                (*head)->prev = NULL;
                if (*head != NULL) {
                    (*head)->next = NULL;
                }
                curr = *head;
            }
            else {
                curr->prev->next = curr->next;
                if (curr->next != NULL) {
                    curr->next->prev = curr->prev;
                }
                curr = curr->next;
            }
            free(curr);
        }
        else {
            curr = curr->next;
        }
    }
    if (!flag) {
        printf("Khong co phan tu khop voi gia tri");
    }
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
    int val;
    scanf("%d", &val);
    deleteNode(&head, val);
    printList(head);

    free(head);
    return 0;
}