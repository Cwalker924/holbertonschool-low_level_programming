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
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: start of the list
 * @str: string to add to node
 * Return: new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (*head == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
