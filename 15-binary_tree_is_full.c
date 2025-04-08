#include "binary_trees.h"

/**
 * binary_tree_is_full - Function
 *
 * Description: Checks if the children of the node also have 2 children.
 * @tree: The tree/node to search through
 *
 * Return: 0 if not, 1 if so
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || binary_tree_is_full(tree->left) != binary_tree_is_full(tree->right))
		return (0);

	return (1);
}
