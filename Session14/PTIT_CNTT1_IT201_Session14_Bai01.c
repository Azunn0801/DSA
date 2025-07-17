#include <stdio.h>
#include <stdlib.h>

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

int main() {
    int n;
    scanf("%d", &n);
    Stack *stack = createStack();
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        Node *node = createNode(data);
        node->next = stack->top;
        stack->top = node;
    }


    free(stack);
    return 0;
}