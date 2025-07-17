#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node *next;
}   Node;
typedef struct Stack {
    Node *top;
}   Stack;

Node *createNode(int data) {
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

Stack *createStack() {
    Stack *stack = malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack *stack, int data) {
    Node *node = createNode(data);
    node->next = stack->top;
    stack->top = node;
}

bool isEmpty(Stack *stack) {
    return stack->top == NULL;
}

void print(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Ngan xep trong");
        return;
    }
    while (stack->top != NULL) {
        printf("%d\n", stack->top->data);
        stack->top = stack->top->next;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Stack *stack = createStack();
    for (int i = 0; i < n; i++) {
        push(stack, i + 1);
    }

    print(stack);
    free(stack);
    return 0;
}