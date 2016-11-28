#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: start of the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
