#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node's data (n).
 * @head: start of the linked list
 * Return: the data contents of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;

	if (head == NULL)
		return (0);

	pop = *head;
	if (pop != NULL)
	{
		*head = pop->next;
		i = pop->n;
		free(pop);
		return (i);
	}
	return (0);
}
