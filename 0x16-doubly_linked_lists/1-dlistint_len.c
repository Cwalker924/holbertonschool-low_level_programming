#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: start of linked list
 * Return: size of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
