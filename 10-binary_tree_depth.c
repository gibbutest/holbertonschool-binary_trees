#include "binary_trees.h"

/**
 * binary_tree_depth - Gets the depth of a node
 * @tree: The tree to search through
 *
 * Return: The depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
