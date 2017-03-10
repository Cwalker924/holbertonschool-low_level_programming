#include "binary_trees.h"
/**
 * binary_tree_depth - a function that measures the depth of a node in a binary
 * tree
 * @node: a pointer to the node to measure the depth of
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	if (node->parent != NULL)
		return (binary_tree_depth(node->parent) + 1);
	return (0);
}
