#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal the tree and run func
 * @tree: The node to run through
 * @func: The function to run
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
