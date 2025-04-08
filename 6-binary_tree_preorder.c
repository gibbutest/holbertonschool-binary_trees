#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order traversal the tree and run func
 * @tree: The node to run through
 * @func: The function to run
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
