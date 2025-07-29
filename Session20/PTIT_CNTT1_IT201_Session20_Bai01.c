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

int main() {
  int val;
  printf("Nhap gia tri khoi tao: ");
  scanf("%d", &val);
  TreeNode *root = initTreeNode(val);
  root->left = initTreeNode(3);
  root->left->left = initTreeNode(5);
  root->right = initTreeNode(4);

  return 0;
}