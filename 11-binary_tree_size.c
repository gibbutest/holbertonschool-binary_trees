#include "binary_trees.h"

/**
 * binary_tree_size - Gets the size of each node and its children
 * @tree: The tree/node to get the size of
 *
 * Return: The total size of the node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	return (
		!tree ?
			0 :
			binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	);
}
