#include "lists.h"

/**
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newnode, *tmep;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	i = 0;
	while (i < index)
	{
		head = head->next;
		if (i == index)
		{
			
		}
		i++;
	}
}
