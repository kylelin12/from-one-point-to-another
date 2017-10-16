#include <stdio.h>
#include <stdlib.h>

// Explicitely declaring the node struct
struct node {
    int id;
    struct node *next;
};

// Prints the node list starting from the pointer
void print_list(struct node *front) {
    while (front) {
        printf("id: %d\n", front->id);
        front = front->next;
    }
}

// Inserts a node in front of the specified node with the included data.
// Returns the new node address
struct node * insert_front(struct node *front, int dataid) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->id = dataid;
    newNode->next = front;
    return newNode;
}

// Iterates through the list and frees every node, returning the address of
// where the input node used to be
struct node * free_list(struct node *front) {
    struct node *temp;
    while (front) {
        temp = front;
        front = front->next;
        free(temp);
    }
    return front;
}