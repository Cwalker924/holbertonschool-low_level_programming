#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: start of linked list
 * Return: 0 if error otherwise sum of linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *temp;

	if (!head)
		return (0);

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
