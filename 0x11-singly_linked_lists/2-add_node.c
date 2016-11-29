#include "lists.h"

/**
 * _strlen - length of a string
 * @s: string passed in
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

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
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
