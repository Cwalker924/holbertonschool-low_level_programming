#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located otherwise -1 if no match
 */
int linear_search(int *array, size_t size, int value)
{
	int *parray;
	size_t index;

	if (!array)
		return (-1);

	parray = array;
	index = 0;
	while (index <= size - 1)
	{
		printf("Value checked array[%lu] = [%d]\n",index, parray[index]);
		if (parray[index] == value)
		{
			return (index);
		}
		index++;
	}
	return(-1);
}
