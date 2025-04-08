#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves of that node
 * @tree: The tree/node to search through
 *
 * Return: The number of leaves of that node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (
		!tree ?
			0 :
			!tree->left && !tree->right ?
				1 :
				binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right)
	);
}
