#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: start of linked list
 * @index: of the list where the new node should be added
 * @n: data value for new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

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

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;

	if (index == 0)
	{
		*head = newnode;
		newnode->next = temp;
	}
	else if (temp->next)
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp->next = newnode;
	}

	return (newnode);
}
