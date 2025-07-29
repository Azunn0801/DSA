//
// Created by Azunn on 7/28/2025.
//
#include <stdio.h>
#include <stdlib.h>

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

void printRoot(TreeNode* root) {
  if (root == NULL) {
    return;
  }

  printRoot(root->left);
  printf("%d\n", root->data);
  printRoot(root->right);
}

int main() {
  TreeNode* root = initTree(2);
  root->left = initTree(3);
  root->right = initTree(4);
  root->left->left = initTree(5);

  printRoot(root);
  free(root);
  return 0;
}