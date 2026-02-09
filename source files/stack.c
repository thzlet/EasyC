#include "stack.h"

void push(StackNode** top, int val) {
    StackNode* new_node = (StackNode*) malloc(sizeof(StackNode));
    if(!new_node) return;
    new_node->data = val;
    new_node->next = *top;
    *top = new_node;
}

int pop(StackNode** top) {
    if(!top || !*top) return -1;
    StackNode* temp = *top;
    int val = temp->data;
    *top = temp->next;
    free(temp);
    return val;
}

int peek(StackNode* top) {
    if(!top) return -1;
    return top->data;
}

void print_stack(StackNode* top) {
    StackNode* current = top;
    while(current) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void delete_stack(StackNode** top) {
    while(*top) {
        StackNode* temp = *top;
        *top = temp->next;
        free(temp);
    }
}