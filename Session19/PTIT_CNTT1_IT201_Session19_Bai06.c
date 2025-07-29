//
// Created by Azunn on 7/28/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 5

typedef struct TreeNode {
  int data;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

typedef struct Queue {
  TreeNode* data[MAX];
  int front, rear;
} Queue;

Queue* initQueue(Queue* queue) {
  queue->front = queue->rear = 0;
}

bool isEmpty(Queue* queue) {
  return queue->front == queue->rear;
}

void enqueue(Queue* queue, TreeNode* node) {
  queue->data[queue->rear++] = node;
}

TreeNode* dequeue(Queue* queue) {
  return queue->data[queue->front++];
}

TreeNode* initTree(int data) {
  TreeNode* newNode = malloc(sizeof(TreeNode));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

bool BFS(TreeNode* root, int value) {
  if (root == NULL) {
    return false;
  }

  Queue queue;
  initQueue(&queue);
  enqueue(&queue, root);

  while (!isEmpty(&queue)) {
    TreeNode *cur = dequeue(&queue);
    if (cur->data == value) {
      return true;
    }

    if (cur->left != NULL) {
      enqueue(&queue, cur->left);
    }

    if (cur->right != NULL) {
      enqueue(&queue, cur->right);
    }
  }
}

int main() {
  TreeNode* root = initTree(2);
  root->left = initTree(3);
  root->right = initTree(4);
  root->left->left = initTree(5);

  int value;
  printf("findValue: ");
  scanf("%d", &value);
  printf("%s", BFS(root, value) ? "true" : "false");

  free(root);
  return 0;
}