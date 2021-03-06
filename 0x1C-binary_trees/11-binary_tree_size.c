#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size of
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter;

	if (tree == NULL)
		return (0);

	counter = (binary_tree_size(tree->left) + 1)
		+ binary_tree_size(tree->right);

	return (counter);
}
