#include <stdio.h>
#include "dynamic_mem.h"

int* allocate_int_array(int n) {
    int* arr = (int*) malloc(n * sizeof(int));
    if(!arr) {
        fprintf(stderr, "Memory allocation failed!\n");
        return NULL;
    }
    return arr;
}

int* resize_int_array(int* arr, int new_size) {
    int* new_arr = (int*) realloc(arr, new_size * sizeof(int));
    if(!new_arr) {
        fprintf(stderr, "Memory reallocation failed!\n");
        return NULL;
    }
    return new_arr;
}

void free_memory(void* ptr) {
    if(ptr) free(ptr);
}