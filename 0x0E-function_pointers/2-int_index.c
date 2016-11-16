#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: pointer to array
 * @size: array size
 * @cmp: other argument options
 * Return: -1 if no matches are found or size <= 0,
 * otherwise position of the first matching element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
