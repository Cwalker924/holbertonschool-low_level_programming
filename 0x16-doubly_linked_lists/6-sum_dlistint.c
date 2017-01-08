#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: start of linked list
 * Return: 0 if error otherwise sum of linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int i;

	if (!head)
		return (0);

	i = 0;
	while (head->next != NULL)
	{
		head = head->next;
		i += head->n;
	}
	return (i);
}
