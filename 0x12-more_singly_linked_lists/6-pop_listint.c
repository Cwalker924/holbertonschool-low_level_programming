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

	pop = *head;
	if (pop != NULL)
	{
		*head = pop->next;
		i = pop->n;
		free(pop);
	}
	return (0);
}
