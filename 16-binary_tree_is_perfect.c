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
	int depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth = get_depth(tree->parent) + 1;

	return (depth);
}

/**
 * is_perfect - Checks if the tree is perfect
 * @node: The node to search through
 * @current_level: The level of the node
 *
 * Return: 0 if not perfect, 1 if is perfect
 */
int is_perfect(const binary_tree_t *node, int current_level)
{
	int max_depth = get_depth(node) + 1;

	if (!node)
		return (1);

	if (!node->left && !node->right)
		return (max_depth + current_level + 1 ? 1 : 0);

	if (!node->left || !node->right)
		return (0);

	return (is_perfect(node->left, current_level + 1) &&
				  is_perfect(node->right, current_level + 1));
}

/**
 * binary_tree_is_perfect - Checks if the tree is perfect
 * @tree: The tree to search through
 *
 * Return: 0 if not perfect, 1 if is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	return is_perfect(tree, 0);
}
