//
// Created by Azunn on 7/29/2025.
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

TreeNode* initTreeNode(int value) {
  TreeNode* newNode = malloc(sizeof(TreeNode));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Queue* createQueue() {
  Queue* newQueue = malloc(sizeof(Queue));
  newQueue->front = newQueue->rear = 0;
  return newQueue;
}

bool isEmpty(Queue* queue) {
  return queue->rear == queue->front;
}
bool isFull(Queue* queue) {
  return queue->rear == MAX;
}

void enqueue(Queue* queue, TreeNode* node) {
  if (isFull(queue)) {
    return;
  }
  queue->data[queue->rear++] = node;
}

TreeNode* dequeue(Queue* queue) {
  if (isEmpty(queue)) {
    return NULL;
  }

  TreeNode* node = queue->data[queue->front++];
  return node;
}

void preOrder(TreeNode* root) {
  if (root == NULL) {
    return;
  }

  printf("%d\n", root->data);
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(TreeNode* root) {
  if (root == NULL) {
    return;
  }

  inOrder(root->left);
  printf("%d\n", root->data);
  inOrder(root->right);
}

void postOrder(TreeNode* root) {
  if (root == NULL) {
    return;
  }

  postOrder(root->left);
  postOrder(root->right);
  printf("%d\n", root->data);
}

void levelOrder(TreeNode* root) {
  Queue* queue = createQueue();
  enqueue(queue, root);
  if (isEmpty(queue)) {
    return;
  }

  while (!isEmpty(queue)) {
    TreeNode* cur = dequeue(queue);
    printf("%d\n", cur->data);
    if (cur->left != NULL) {
      enqueue(queue, cur->left);
    }
    if (cur->right != NULL) {
      enqueue(queue, cur->right);
    }
  }

  free(queue);
}

int main() {
  TreeNode *root = initTreeNode(2);
  root->left = initTreeNode(3);
  root->left->left = initTreeNode(5);
  root->right = initTreeNode(4);

  printf("Duyet preOrder: \n");
  preOrder(root);
  printf("Duyet inOrder: \n");
  inOrder(root);
  printf("Duyet postOrder: \n");
  postOrder(root);
  printf("Duyet levelOrder: \n");
  levelOrder(root);

  return 0;
}