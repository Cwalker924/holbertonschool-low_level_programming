#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle of
 * Return: the value of a given node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *nppl, *nppr;

	if (node == NULL || (node->parent == NULL || node->parent->parent))
		return (NULL);
	nppl = node->parent->parent->left;
	nppr = node->parent->parent->right;
	if (nppl != NULL && nppr != NULL)
	{
		if (nppr->n == node->parent->n)
			return (nppl);
		else
			return (nppr);
	}
	return (NULL);
}
