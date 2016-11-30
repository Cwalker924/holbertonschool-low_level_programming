#include "lists.h"

/**
 * add_nodeint - adds node to start of linked list
 * @head: start of linked list
 * @n: int data in node
 * Return: newley added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnode;

	addnode = malloc(sizeof(listint_t));
	if (addnode == NULL)
		return (NULL);
	addnode->n = n;
	addnode->next = *head;
	*head = addnode;
	return (addnode);
}
