#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *addnode;

	addnode = malloc(sizeof(dlistint_t));
	if (!addnode)
		return (NULL);
	addnode->n = n;
	addnode->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
		}
		addnode->prev = temp;
		temp->next = addnode;
	}
	else
	{
		*head = addnode;
	}
	return (addnode);
}
