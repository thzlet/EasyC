#include "queue.h"

Queue* create_queue() {
    Queue* q = (Queue*) malloc(sizeof(Queue));
    if(!q) return NULL;
    q->front = q->rear = NULL;
    return q;
}

void enqueue(Queue* q, int val) {
    if(!q) return;
    QueueNode* new_node = (QueueNode*) malloc(sizeof(QueueNode));
    if(!new_node) return;
    new_node->data = val;
    new_node->next = NULL;

    if(!q->rear) {
        q->front = q->rear = new_node;
    } else {
        q->rear->next = new_node;
        q->rear = new_node;
    }
}

int dequeue(Queue* q) {
    if(!q || !q->front) return -1;
    QueueNode* temp = q->front;
    int val = temp->data;
    q->front = temp->next;
    if(!q->front) q->rear = NULL;
    free(temp);
    return val;
}

int peek_queue(Queue* q) {
    if(!q || !q->front) return -1;
    return q->front->data;
}

void print_queue(Queue* q) {
    if(!q) return;
    QueueNode* current = q->front;
    while(current) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void delete_queue(Queue* q) {
    if(!q) return;
    QueueNode* current = q->front;
    while(current) {
        QueueNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(q);
}