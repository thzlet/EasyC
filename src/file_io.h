#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdio.h>
#include <stdlib.h>

int write_array_to_file(const char* filename, int* arr, int n) {
    if(!filename || !arr) return -1;

    FILE* file = fopen(filename, "w");
    if(!file) return -1;

    for(int i = 0; i < n; i++)
        fprintf(file, "%d\n", arr[i]);

    fclose(file);
    return 0;
}

int* read_array_from_file(const char* filename, int* size) {
    if(!filename || !size) return NULL;

    FILE* file = fopen(filename, "r");
    if(!file) return NULL;

    int capacity = 10;
    int count = 0;
    int* arr = (int*) malloc(capacity * sizeof(int));
    if(!arr) return NULL;

    while(fscanf(file, "%d", &arr[count]) == 1) {
        count++;
        if(count >= capacity) {
            capacity *= 2;
            int* temp = (int*) realloc(arr, capacity * sizeof(int));
            if(!temp) {
                free(arr);
                fclose(file);
                return NULL;
            }
            arr = temp;
        }
    }

    fclose(file);
    *size = count;
    return arr;
}

#endif