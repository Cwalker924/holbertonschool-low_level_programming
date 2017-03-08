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
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (new_node->n < parent->n)
	{
		while (parent->left != NULL)
		{
			if (parent->left->n < new_node->n)
			{
				new_node->parent = parent;
				parent->left->parent = new_node;
			}
			else
				new_node->parent = parent->left;
			parent = parent->left;
		}
		new_node->parent = parent;
		return (new_node);
	}
	else
	{
		while (parent->right != NULL)
		{
			if (parent->right->n < new_node->n)
			{
				new_node->parent = parent;
				parent->right->parent = new_node;
			}
			else
				new_node->parent = parent->right;
			parent = parent->right;
		}
		new_node->parent = parent;
		return (new_node);
	}
	return (NULL);
}
