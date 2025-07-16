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

int main() {
    Stack *stack = createStack(MAX);
    printf("Stack created: %d\n", stack->maxSize);

    free(stack);
    return 0;
}