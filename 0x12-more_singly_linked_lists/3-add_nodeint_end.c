#include "lists.h"

/**
 * add_nodeint_end - adds node to end of linked list
 * @head: start of linked list
 * @n: int data element of node
 * Return: addnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode, *temp;

	addnode = malloc(sizeof(listint_t));
	if (addnode == NULL)
		return (NULL);
	addnode->n = n;
	addnode->next = NULL;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = addnode;
	}
	else
	{
		*head = addnode;
	}
	return (addnode);
}
