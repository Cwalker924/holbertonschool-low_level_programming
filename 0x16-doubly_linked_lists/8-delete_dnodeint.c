#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: start of linked list
 * @index: place point in which to delete node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1, *temp2;
	unsigned int i, previous;

	if (!*head)
		return (-1);

	temp2 = *head;
	if (index == 0)
	{
		temp1 = temp2;
		temp2 = temp2->next;
		*head = temp2;
		free(temp1);
		return (1);
	}

	i = 0;
	previous = index - 1;
	while (i < (previous) && temp2 != NULL)
	{
		temp2 = temp2->next;
		i++;
	}

	if (i == (previous))
	{
		temp1 = temp2->next;
		temp2->next = temp1->next;
		free(temp1);
		return (1);
	}

	return (-1);
}
