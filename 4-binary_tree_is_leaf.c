#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks of the node has no children (leaf)
 * @node: The node pointer to check
 *
 * Return: 0 if not a leaf, 1 if is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (!node || (node && (node->left || node->right)) ? 0 : 1);
}
