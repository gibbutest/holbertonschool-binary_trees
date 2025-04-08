#include "binary_trees.h"

/**
 * binary_tree_uncle - Gets the uncle node
 * @node: The node to get the uncle of
 *
 * Return: The uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (
		node->parent != node->parent->parent->right ?
			node->parent->parent->right :
			node->parent->parent->left
	);
}
