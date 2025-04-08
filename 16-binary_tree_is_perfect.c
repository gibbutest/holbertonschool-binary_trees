#include "binary_trees.h"

#include <stdio.h>

/**
 * get_depth - Gets the depth of a node
 * @tree: The tree to search through
 *
 * Return: The depth of the node
 */
size_t get_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (get_depth(tree->left) + 1);
}

/**
 * is_perfect - Checks if the tree is perfect
 * @node: The node to search through
 * @depth: The expected depth of the node
 *
 * Return: 0 if not perfect, 1 if is perfect
 */
int is_perfect(const binary_tree_t *node, int depth)
{
	if (!node)
		return (depth == 0);

	if (!node->left != !node->right)
		return (0);

	return (is_perfect(node->left, depth - 1) &&
					is_perfect(node->right, depth - 1));
}

/**
 * binary_tree_is_perfect - Checks if the tree is perfect
 * @tree: The tree to search through
 *
 * Return: 0 if not perfect, 1 if is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = get_depth(tree);

	if (!tree)
		return (0);

	return (is_perfect(tree, depth));
}
