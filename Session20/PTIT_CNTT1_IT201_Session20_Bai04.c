//
// Created by Azunn on 7/29/2025.
//
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

int countLeaves(TreeNode* root, int count) {
  if (root == NULL) {
    return 0;
  }
  if (root->left == NULL && root->right == NULL) {
    count++;
    return count;
  }
  return countLeaves(root->left, count) + countLeaves(root->right, count);
}

int main() {
  TreeNode *root = initTreeNode(2);
  root->left = initTreeNode(3);
  root->left->left = initTreeNode(5);
  root->right = initTreeNode(4);
  printf("number of leaves: %d", countLeaves(root, 0));

  return 0;
}