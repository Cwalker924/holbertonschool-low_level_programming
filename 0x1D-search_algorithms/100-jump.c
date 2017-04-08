#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located otherwise -1 if no match
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, counter;

	if (!array)
		return (-1);
	start = 0;
	end = sqrt(size);

	while (array[end] <= value && end < size)
	{
		start = end;
		end += sqrt(size);
		if (end > size - 1)
		{
			end = size;
		}
	}
	counter = start;
	printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
	for (counter = start; counter < end; counter++)
	{
		if (array[counter] == value)
			return (counter);
		counter++;
	}
	printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
	return (-1);
}
