#include "search_algos.h"

/**
 * linear_search - 
 * @array: 
 * @size: 
 * @value: 
 * Return: 
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
