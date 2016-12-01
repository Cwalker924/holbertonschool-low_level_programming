#include "lists.h"

/**
 * free_listint - function that free's listint_t
 * @head: start of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
