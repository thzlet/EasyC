#include "list.h"

Node* create_node(int val) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    if(!new_node) return NULL;
    new_node->data = val;
    new_node->next = NULL;
    return new_node;
}

void append_node(Node** head, int val) {
    Node* new_node = create_node(val);
    if(!new_node) return;

    if(*head == NULL) {
        *head = new_node;
    } else {
        Node* current = *head;
        while(current->next)
            current = current->next;
        current->next = new_node;
    }
}

void print_list(Node* head) {
    Node* current = head;
    while(current) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void delete_list(Node** head) {
    Node* current = *head;
    Node* next_node;
    while(current) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    *head = NULL;
}