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

void print(Stack *stack) {
    printf("stack={\n");
    printf("\t");
    Node *node = stack->top;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n}\n");
}

int main() {
    int n;
    scanf("%d", &n);
    Stack *stack = createStack();
    for (int i = n - 1; i >= 0; i--) {
        push(stack, i + 1);
    }
    int data;
    scanf("%d", &data);
    push(stack, data);

    print(stack);
    free(stack);
    return 0;
}