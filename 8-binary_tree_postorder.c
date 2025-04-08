#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal the tree and run func
 * @tree: The node to run through
 * @func: The function to run
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
