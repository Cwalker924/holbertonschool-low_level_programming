#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: start of link list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
