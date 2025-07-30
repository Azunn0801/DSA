//
// Created by Azunn on 7/30/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

Node* createNode(int data) {
  Node* newNode = malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  return newNode;
}

void addEdge(Node* graph[], int u, int v, int size) {
  if (u >= 0 && u < size && v >= 0 && v < size) {
    Node* newV = createNode(v);
    newV->next = graph[u];
    graph[u] = newV;

    Node* newU = createNode(u);
    newU->next = graph[v];
    graph[v] = newU;
  }
}

void printGraph(Node* graph[], int size) {
  printf("[\n");
  for (int i = 0; i < size; i++) {
    printf(" ");
    Node* tmp = graph[i];
    if (tmp == NULL) {
      printf("NULL,\n");
      continue;
    }
    while (tmp != NULL) {
      printf("%d", tmp->data);
      if (tmp->next != NULL) {
        printf("->");
      }
      else {
        printf("->NULL");
      }
      tmp = tmp->next;
    }
    printf(",\n");
  }
  printf("]\n");
}

int main() {
  int size = 3;
  Node* graph[3] = {NULL, NULL, NULL};

  addEdge(graph, 1, 2, size);
  printGraph(graph, size);

  addEdge(graph, 0, 1, size);
  printGraph(graph, size);
  return 0;
}