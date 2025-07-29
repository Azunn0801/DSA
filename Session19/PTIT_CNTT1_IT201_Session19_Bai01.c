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
  printf("node = {\n");
  printf("\tdata: %d,\n", root->data);
  printf("\tleft->NULL,\n");
  printf("\tright->NULL\n");
  printf("}");
}

int main() {
  int data;
  printf("Enter data: ");
  scanf("%d", &data);
  TreeNode* root = initTree(data);

  printRoot(root);
  free(root);
  return 0;
}