#include "lists.h"

/**
 *
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next
		i++;
	}
	return (i);
}
