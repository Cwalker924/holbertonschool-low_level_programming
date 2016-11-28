#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: start of a list
 * Return: number nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
