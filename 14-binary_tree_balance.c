#include "binary_trees.h"

/**
 * get_height - Gets the height of the tree.
 * @tree: The tree to search.
 *
 * Return: The height of the tree
 */
size_t get_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (0);

	left_height = tree->left ? get_height(tree->left) + 1 : 0;
	right_height = tree->right ? get_height(tree->right) + 1 : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Finds the balance factor of the tree
 * @tree: The tree/node to search through
 *
 * Return: The resulting balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (0);

	left_height = tree->left ? get_height(tree->left) + 1 : 0;
	right_height = tree->right ? get_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
