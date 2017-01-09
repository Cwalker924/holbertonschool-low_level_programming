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
	unsigned int i;

	if (!*head)
		return (-1);
	else
	{

		i = 1;
		temp1 = *head;
		if (i <= index)
		{
			temp2 = temp1;
			if (!temp2->prev)
			{
				*head = temp1->prev;
			}
			else
			{
				temp1 = temp1->prev;
				temp1->next = temp2->next;
			}
			if (temp2->next)
			{
				temp1 = temp2->next;
				temp1->prev = temp2->prev;
			}
			free(temp2);
			return (1);
			i++;
		}
	}
	return (-1);
}
