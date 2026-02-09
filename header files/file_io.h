#ifndef FILE_IO_H
#define FILE_IO_H

#include <stdio.h>
#include <stdlib.h>

// write an array of integers to a file
// returns 0 on success, -1 on failure
int write_array_to_file(const char* filename, int* arr, int n);

// read integers from a file into a dynamically allocated array
// size' will contain the number of elements read
// returns pointer to array or NULL if failed
int* read_array_from_file(const char* filename, int* size);

#endif