#include "lists.h"

/**
 * insert_dnodeint_at_index - deletes the node at index
 * @head: start of linked list
 * @index: position to add new node
 * @n: value given to new node
 * Return: new node or NULL if error
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index,
				     int n)
{
	dlistint_t *addnode, *temp;
	unsigned int i;

	if (!head)
		return (NULL);

	addnode = malloc(sizeof(dlistint_t));
	if (!addnode)
		return (NULL);
	addnode->n = n;

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
		*head = addnode;
		addnode->next = temp;
	}
	else if (temp->next)
	{
		addnode->next = temp->next;
		temp->next = addnode;
	}
	else
	{
		addnode->next = NULL;
		temp->next = addnode;
	}
	return (addnode);
}
