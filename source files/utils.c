#include "utils.h"

void swap_int(int* a, int* b) {
    if(a && b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int max_int(int a, int b) {
    return (a > b) ? a : b;
}

int min_int(int a, int b) {
    return (a < b) ? a : b;
}

void print_array_int(int* arr, int n) {
    if(!arr) return;
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}