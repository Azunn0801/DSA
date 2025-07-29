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

int findLevel(TreeNode* root, int findIdx) {
  int level = 0;
  if (root == NULL) {
    return 0;
  }

  if (root->data == findIdx) {
    return level;
  }
}

int main() {
  TreeNode *root = initTreeNode(2);
  root->left = initTreeNode(3);
  root->left->left = initTreeNode(5);
  root->right = initTreeNode(4);

  int findVal;
  printf("Nhap gia tri can tim: ");
  scanf("%d", &findVal);
  free(root);
  return 0;
}