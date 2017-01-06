#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addnode;

	addnode = malloc(sizeof(dlistint_t));
	if (!addnode)
		return (NULL);
	addnode->n = n;
	addnode->prev = NULL;

	if (*head != NULL)
	{
		addnode->next = *head;
		*head = addnode;
	}
	else
	{
		*head = addnode;
	}
	return (addnode);
}
