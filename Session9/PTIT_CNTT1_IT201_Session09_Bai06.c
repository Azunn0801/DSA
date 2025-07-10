//
// Created by Azunn on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* createNode() {
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    printf("\n");
    return newNode;
}

void deleteNode(Node **head) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    Node *preNode = NULL;
    Node *tmp = *head;
    while (tmp -> next != NULL) {
        preNode = tmp;
        tmp = tmp -> next;
    }
    preNode -> next = NULL;
    free(tmp);

}

void printArr(Node *head) {
    while (head != NULL) {
        printf("Data: %d\n", head->data);
        head = head->next;
    }
}

int main() {
    int count = 0;
    Node *head = NULL;
    while (count < 5) {
        Node *newNode = createNode();
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

    deleteNode(&head);
    printArr(head);
    free(head);
    return 0;
}
