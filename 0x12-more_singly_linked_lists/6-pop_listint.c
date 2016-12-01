#include "lists.h"

/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;
	if (head == NULL)
		return (0);

	pop = *head;
	if (pop != NULL)
	{
		*head = pop->next;
		i = pop->n;
		free(pop);
		return (i);
	}
	return (0);
}
