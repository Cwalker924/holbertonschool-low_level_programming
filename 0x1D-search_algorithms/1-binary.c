#include "search_algos.h"

/**
 * print_array - prints a list
 * @array: pointer to an array
 * @start: beginning element to print
 * @end: ending element to print
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	while (start <= end - 1)
	{
		printf("%d, ", array[start]);
		start++;
	}
	printf("%d\n", array[start]);
}

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located otherwise -1 if no match
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;
	int *parray;

	if (!array)
		return (-1);

	parray = array;
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		mid = (start + end) / 2;
		print_array(array, start, end);
		if (parray[mid] == value)
		{
			return (mid);
		}
		else if (parray[mid] > value)
		{
			end = mid;
		}
		else
		{
			start = mid;
		}
		start++;
	}
	return (-1);
}
