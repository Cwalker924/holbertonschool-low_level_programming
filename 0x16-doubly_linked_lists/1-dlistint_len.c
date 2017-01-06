#include "lists.h"

/**
 *
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
