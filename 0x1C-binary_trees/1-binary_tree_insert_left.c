#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - 
 * @parent: 
 * @value: 
 * Return: 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	temp = parent->left;
	parent->left = new_node;
	if (temp == NULL)
		new_node->left = NULL;
	else
	{
		new_node->left = temp;
		temp->parent = new_node;
	}

	return (new_node);
}