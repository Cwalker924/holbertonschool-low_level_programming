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
	size_t start, end;

	if (!array || size == 0)
		return (-1);

	start = 0;
	end = sqrt(size);
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", end, array[end]);
		start = end;
		end += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	while (start <= end && end <= size - 1)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}
	printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	return (-1);
}
