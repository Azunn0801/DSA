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

TreeNode* initTree(int data) {
  TreeNode* newNode = malloc(sizeof(TreeNode));
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

bool DFS(TreeNode* root, int value) {
  if (root == NULL) {
    return false;
  }

  if (value == root->data) {
    return true;
  }

  if (DFS(root->left, value)) {
    return true;
  }

  if (DFS(root->right, value)) {
    return true;
  }

  return false;
}

int main() {
  TreeNode* root = initTree(2);
  root->left = initTree(3);
  root->right = initTree(4);
  root->left->left = initTree(5);

  int value;
  printf("findValue: ");
  scanf("%d", &value);
  printf("%s", DFS(root, value) ? "true" : "false");

  free(root);
  return 0;
}