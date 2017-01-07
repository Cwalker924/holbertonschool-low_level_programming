#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	if (head->next != NULL)
	{
		i = 0;
		while (i < index)
		{
			head = head->next;
			i++;
		}
		return (head);
	}
	return (NULL);
}
