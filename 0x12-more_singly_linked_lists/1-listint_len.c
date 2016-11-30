#include "lists.h"

/**
 * listsint_len - returns the number of elements in listsint_t
 * @h: start of linked list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
