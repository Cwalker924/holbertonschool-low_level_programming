#include <stddef.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: an array
 * @size: size of array
 * @action: which function to print with number
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
