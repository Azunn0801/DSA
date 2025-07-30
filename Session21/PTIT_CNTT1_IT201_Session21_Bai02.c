//
// Created by Azunn on 7/30/2025.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Graph {
  int size;
  int** data;
} Graph;

Graph* initGraph(int size) {
  Graph* newGraph = malloc(sizeof(Graph));
  newGraph->size = size;
  newGraph->data = malloc(sizeof(int*) * newGraph->size);
  for (int i = 0; i < size; i++) {
    newGraph->data[i] = malloc(sizeof(int) * size);
    for (int j = 0; j < size; j++) {
      newGraph->data[i][j] = 0;
    }
  }

  return newGraph;
}

void addEdge(Graph* graph, int u, int v) {
  if (u >= 0 && u < graph->size && v >= 0 && v < graph->size) {
    graph->data[u][v] = 1;
    graph->data[v][u] = 1;
  }
}

void printGraph(Graph* graph) {
  printf("[\n");
  for (int i = 0; i < graph->size; i++) {
    printf(" ");
    for (int j = 0; j < graph->size; j++) {
      printf(" %2d", graph->data[i][j]);
      if (j < graph->size - 1) {
        printf(",");
      }
    }
    printf("\n");
  }
  printf("]\n");
}

int main() {
  Graph* graph = initGraph(4);

  addEdge(graph, 0, 1);
  addEdge(graph, 0, 2);
  addEdge(graph, 1, 2);
  addEdge(graph, 2, 3);
  printGraph(graph);

  free(graph);
  return 0;
}