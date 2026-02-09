#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>

// node structure for singly linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// create a new node with given value
Node* create_node(int val);

// append a node at the end of the list
void append_node(Node** head, int val);

// print all elements of the list
void print_list(Node* head);

// free all nodes in the list
void delete_list(Node** head);

#endif