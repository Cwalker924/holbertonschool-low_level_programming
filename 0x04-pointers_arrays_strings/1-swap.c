#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - swaps two pointer values
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
