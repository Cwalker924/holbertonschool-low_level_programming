#ifndef LB_SEARCH
#define LB_SEARCH

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t start, size_t end);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
