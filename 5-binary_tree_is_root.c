#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the node is the root node.
 * @node: The node pointer to check
 *
 * Return: 0 if not root, 1 if is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (!node || (node && node->parent) ? 0 : 1);
}
