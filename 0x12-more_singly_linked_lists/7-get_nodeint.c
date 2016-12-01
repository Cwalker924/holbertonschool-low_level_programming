#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list.
 * @head: start of the linked list
 * @index: of node starting at 0
 * Return: the index otherwise, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	i = 0;
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
