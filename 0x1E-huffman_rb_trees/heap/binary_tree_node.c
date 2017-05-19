#include "heap.h"

/**
 * binary_tree_node - Creates a node in a binary tree
 * @parent: parent node to newly created node
 * @data: data stored in newly created node
 * Return: new node or NULL upon failure
 */
binary_tree_node_t *binary_tree_node(binary_tree_node_t *parent, void *data)
{
	binary_tree_node_t *add_node;

	add_node = malloc(sizeof(binary_tree_node_t));
	if (add_node == NULL)
		return (NULL);

	add_node->left = NULL;
	add_node->right = NULL;
	add_node->parent = parent;
	add_node->data = data;

	return (add_node);
}
