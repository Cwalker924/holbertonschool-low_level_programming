#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes nodes at given index
 * @head: start of linked list
 * @index: of the list where the node should be deleted
 * Return: 1 if successful, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *keep;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	i = 0;
	while (i < index)
	{
		i++;
		keep = temp;
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
	}
	else if (temp->next)
	{
		keep->next = temp->next;
	}
	else
	{
		keep->next = NULL;
	}
	free(temp);
	return (1);
}
