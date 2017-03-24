#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling of
 * Return: sibling node value
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *npl, *npr;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	npl = node->parent->left;
	npr = node->parent->right;
	if (npl != NULL && npr != NULL)
	{
		if (npr->n == node->n)
			return (npl);
		else
			return (npr);
	}
	return (NULL);
}
