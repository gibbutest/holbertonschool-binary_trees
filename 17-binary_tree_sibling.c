#include "binary_trees.h"

/**
 * binary_tree_sibling - Gets the sibling node
 * @node: The node to get the sibling of
 *
 * Return: The sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (
		node == node->parent->left ?
			node->parent->right :
			node->parent->left
	);
}
