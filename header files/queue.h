#ifndef QUEUE_H
#define QUEUE_H

#include <stdlib.h>
#include <stdio.h>

// node structure for queue
typedef struct QueueNode {
    int data;
    struct QueueNode* next;
} QueueNode;

// queue structure with pointers to front and rear
typedef struct Queue {
    QueueNode* front;
    QueueNode* rear;
} Queue;

// initialize an empty queue
Queue* create_queue();

// enqueue a value into the queue
void enqueue(Queue* q, int val);

//dequeue a value from the queue
// returns -1 if queue is empty
int dequeue(Queue* q);

// peek at the front value of the queue
// returns -1 if queue is empty

int peek_queue(Queue* q);

// print all elements in the queue
void print_queue(Queue* q);

// free all nodes in the queue
void delete_queue(Queue* q);

#endif