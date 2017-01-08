#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node in linked list
 * @head: start of linked list
 * @index: place point of index
 * Return: node or NULL if unsuccessful
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	if (head->next != NULL)
	{
		i = 0;
		while (i < index)
		{
			head = head->next;
			i++;
		}
		return (head);
	}
	return (NULL);
}
