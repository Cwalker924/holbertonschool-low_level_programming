#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: start of linked list
 * Return: sum of all data in list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
