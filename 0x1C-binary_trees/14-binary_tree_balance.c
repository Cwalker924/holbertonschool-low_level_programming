#include "binary_trees.h"

/**
 * binary_tree_height_int - a function that measures the height of a
 * binary tree
 * @tree: a pointer to the root node of the tree to measure the height of
 * Return: height of tree
 */
int binary_tree_height_int(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_height_int(tree->left) + 1;
	right = binary_tree_height_int(tree->right) + 1;
	if (left < right)
		return (right);
	else
		return (left);
}

/**
 * binary_tree_balance - a function that measures the balance factor of a
 * binary tree
 * @tree: a pointer to the root node of the tree to measure the balance
 * factor of
 * Return: difference between left and right height or 0 otherwise 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height_int(tree->left);
	right = binary_tree_height_int(tree->right);

	return (left - right);
}
