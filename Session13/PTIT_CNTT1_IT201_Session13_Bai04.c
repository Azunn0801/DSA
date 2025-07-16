//
// Created by Azunn on 7/16/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct {
    int top;
    int maxSize;
    int *data;
} Stack;

Stack* createStack(int maxSize) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = -1;
    stack->maxSize = maxSize;
    stack->data = (int*)malloc(maxSize * sizeof(int));
    return stack;
}

bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

bool isFull(Stack *stack) {
    return stack->top == stack->maxSize - 1;
}

void push(Stack *stack, int data) {
    if (isFull(stack)) {
        printf("Da dat den gioi han stack\n");
        exit(1);
    }
    stack->data[++stack->top] = data;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        return -1;
    }
    return stack->data[stack->top--];
}

void print (Stack *stack) {
    printf("stack = {\n");
    printf("\telements: [");
    for (int i = 0; i <= stack->top; i++) {
        if (i != stack->top) {
            printf("%d, ", stack->data[i]);
        }
        else {
            printf("%d", stack->data[i]);
        }
    }
    printf("],\n");
    printf("\ttop: %d,\n", stack->top);
    printf("\tcap: %d\n", stack->maxSize);
    printf("}\n");

}

int main() {
    int maxSize, insVal;

    printf("Nhap kich thuoc ngan xep: ");
    scanf("%d", &maxSize);
    Stack *stack = createStack(maxSize);

    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < stack->maxSize; i++) {
        scanf("%d", &insVal);
        push(stack, insVal);
    }
    while (!isEmpty(stack)) {
        printf("%d\n", pop(stack));
    }

    free(stack);
    return 0;
}