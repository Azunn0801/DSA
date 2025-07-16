//
// Created by Azunn on 7/16/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAX_LEN 100

typedef struct {
    int top;
    int maxSize;
    char *data;
} Stack;

Stack* createStack(int maxSize) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = -1;
    stack->maxSize = maxSize;
    stack->data = (char*)malloc(maxSize * sizeof(char));
    return stack;
}
void push(char *str, Stack *s1, Stack *s2, bool *flag) {
    *flag = false;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            *flag = true;
            continue;
        }
        if (!*flag) {
            s1->data[++s1->top] = str[i];
        }
        else {
            s2->data[++s2->top] = str[i];
        }
    }
}

bool checkMirror(Stack *stack1, Stack *stack2) {
    if (stack1->top != stack2->top) {
        return false;
    }
    int len = stack1->top;
    for (int i = 0; i <= len; i++) {
        if (stack1->data[i] != stack2->data[len - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[MAX_LEN];
    fgets(str, MAX_LEN, stdin);
    str[strlen(str) - 1] = '\0';

    bool flag;

    Stack *s1 = createStack(strlen(str));
    Stack *s2 = createStack(strlen(str));
    push(str, s1, s2, &flag);

    if (!flag) {
        printf("False\n");
    }
    else if (checkMirror(s1, s2)) {
        printf("True\n");
    }
    else {
        printf("False\n");
    }

    free(s1);
    free(s2);
    return 0;
}