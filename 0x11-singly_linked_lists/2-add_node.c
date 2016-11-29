#include "lists.h"

/**
 * add_node -  a function that adds a new node at the
 * beginning of a list_t list.
 * @head: p-to-p the start list.
 * @str: string to add to node.
 * Return: address of new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
