#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main() {
  // Creates a testing node
  struct node *nodeTest;
  nodeTest = NULL;

  // Inserts a 0 node to the front of the NULL node
  nodeTest = insert_front(nodeTest, 0);
  printf("Insert Test- List:\n");
  // Prints the list after the insert
  print_list(nodeTest);

  // Inserts nodes with data values of multiples of 5 into the list
  int i;
  for (i = 1; i < 15; i++) {
    nodeTest = insert_front(nodeTest, i * 5);
  }

  printf("Insert Test- List:\n");
  // Prints the list after the inserts
  print_list(nodeTest);

  printf("Freeing Test\n");
  // Prints the list after freeing it
  print_list(free_list(nodeTest));
  return 0;
}