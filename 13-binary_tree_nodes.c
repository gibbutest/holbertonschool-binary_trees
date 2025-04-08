#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with children
 * @tree: The tree/node to search through
 *
 * Return: The number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (
		!tree || (!tree->left && !tree->right) ?
			0 :
			(binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right))
	);
}
