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

TreeNode* initTreeNode(int value) {
  TreeNode* newNode = malloc(sizeof(TreeNode));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

void insNode(TreeNode* root, int data){
  if (root == NULL) {
    return;
  }

  if (root->left == NULL) {
    root->left = initTreeNode(data);
  }
  else if (root->right == NULL) {
    root->right = initTreeNode(data);
  }

  insNode(root->left, data);
}

void preOrder(TreeNode* root) {
  if (root == NULL) {
    return;
  }

  printf("%d\n", root->data);
  preOrder(root->left);
  preOrder(root->right);
}

int main() {
  TreeNode *root = initTreeNode(2);
  root->left = initTreeNode(3);
  root->left->left = initTreeNode(5);
  root->right = initTreeNode(4);

  int val;
  printf("addValue: ");
  scanf("%d", &val);
  insNode(root, val);

  printf("Duyet preOrder: \n");
  preOrder(root);

  return 0;
}