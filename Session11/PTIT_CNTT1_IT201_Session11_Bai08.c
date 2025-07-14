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

void deleteNode(Node **head, int index) {
    int count = 1;
    Node *curr = *head;

    if (*head == NULL || index < 1) {
        printf("vi tri khong hop le");
        return;
    }

    if (index == 1) {
        *head = curr->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(curr);
        return;
    }

    while (curr != NULL && count < index) {
        curr = curr->next;
        count++;
    }

    if (curr == NULL) {
        printf("Vi tri vuot qua danh sach!");
        exit(1);
    }

    if (curr->prev != NULL) {
        curr->prev->next = curr->next;
    }

    if (curr->next != NULL) {
        curr->next->prev = curr->prev;
    }
    free(curr);
}

int main() {
    int total = 5, pos;
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
    scanf("%d", &pos);
    deleteNode(&head, pos);
    printList(head);
    free(head);

    return 0;
}