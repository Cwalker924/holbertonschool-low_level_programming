#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: start of linked list
 * @index: place point in which to delete node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!*head)
		return (-1);

	i = 1;
	temp = *head;
	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
		i++;
	}

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else if (temp->next)
	{
	}
	else
	{
	}
	return (1);
}
