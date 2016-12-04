#include "lists.h"

/**
 * print_listint - prints all elements of listsint_t
 * @h: start of lists
 * Return: number of lists
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
