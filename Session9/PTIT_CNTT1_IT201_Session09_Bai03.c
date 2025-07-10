//
// Created by Azunn on 7/10/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool findArr(Node *head) {
    bool flag = false;
    int find;
    printf("\nNhap so can tim: ");
    scanf("%d", &find);
    while (head != NULL) {
        if (head -> data == find) {
            flag = true;
            return flag;
        }
        else {
            head = head->next;
        }
    }
    return flag;

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
    printf("%s\n", findArr(head) ? "True" : "False");
    free(head);
    return 0;
}