#include "lists.h"

/**
 *
 *
 *
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
