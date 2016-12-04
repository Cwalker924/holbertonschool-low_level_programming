#include "lists.h"

/**
 * listint_len - returns the number of elements in listsint_t
 * @h: start of linked list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
