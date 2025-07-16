//
// Created by Azunn on 7/16/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

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

Stack* reverseStack(Stack *stack) {
    Stack *tmp = createStack(stack->maxSize);
    for (int i = stack->top; i >= 0; i--) {
        tmp->data[stack->top - i] = stack->data[i];
    }
    for (int i = 0; i <= stack->top; i++) {
        stack->data[i] = tmp->data[i];
    }
    free(tmp);

    return stack;
}

void push(Stack *stack, int data) {
    if (stack->top == stack->maxSize) {
        return;
    }
    stack->data[++stack->top] = data;
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
    int insVal;
    Stack *stack = createStack(MAX);

    printf("Nhap cac phan tu: \n");
    for (int i = 0; i < MAX; i++) {
        scanf("%d", &insVal);
        push(stack, insVal);
    }
    reverseStack(stack);
    print(stack);

    free(stack);
    return 0;
}