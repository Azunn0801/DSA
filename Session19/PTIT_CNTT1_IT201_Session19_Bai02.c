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

void insertNode(TreeNode* root, int data) {
  if (root == NULL) {
    return;
  }

  if (data < root->data) {
    //ins left
    if (root->left == NULL) {
      root->left = initTree(data);
      return;
    }
    else {
      insertNode(root->left, data);
    }
  }
  else {
    //ins right
    if (root->right == NULL) {
      root->right = initTree(data);
      return;
    }
    else {
      insertNode(root->right, data);
    }
  }
}

void printRoot(TreeNode* root) {
  if (root == NULL) {
    return;
  }

  printf("%d\n", root->data);
  printRoot(root->left);
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