#ifndef DYNAMIC_MEM_H
#define DYNAMIC_MEM_H

#include <stdlib.h>

// allocate memory for an integer array of size 'n'.
// returns pointer to the allocated memory or NULL if allocation fails.
int* allocate_int_array(int n);


// reallocate memory for an integer array to a new size.
// returns pointer to the reallocated memory or NULL if it fails.
int* resize_int_array(int* arr, int new_size);

// free dynamically allocated memory
void free_memory(void* ptr);

#endif