#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>

// node structure for stack
typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

// push a value onto the stack
void push(StackNode** top, int val);

// pop a value from the stack
// returns -1 if stack is empty
int pop(StackNode** top);

// peek at the top value of the stack
// returns -1 if stack is empty
int peek(StackNode* top);

// print the stack from top to bottom
void print_stack(StackNode* top);

// free all nodes in the stack
void delete_stack(StackNode** top);

#endif