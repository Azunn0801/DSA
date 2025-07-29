//
// Created by Azunn on 7/29/2025.
//
#include <bemapiset.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
  int data;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

TreeNode* initTreeNode(int value) {
  TreeNode* newNode = malloc(sizeof(TreeNode));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

int findMax(TreeNode* root, int maxVal) {
  if (root == NULL) {
    return maxVal;
  }
  if (root->data > maxVal) {
    maxVal = root->data;
  }
  return max(findMax(root->left, maxVal), findMax(root->right, maxVal));
}

int main() {
  TreeNode *root = initTreeNode(2);
  root->left = initTreeNode(3);
  root->left->left = initTreeNode(5);
  root->right = initTreeNode(4);
  printf("max value: %d", findMax(root, root->data));

  return 0;
}