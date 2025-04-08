#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts new node to the left
 * @parent: The parent pointer
 * @value: The value to be stored.
 *
 * Return: pointer to the new child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));
	binary_tree_t *old_node;

	if (!child || !parent)
		return (NULL);

	child->n = value;
	child->left = NULL;
	child->right = NULL;
	child->parent = parent;

	if (parent->left)
	{
		old_node = parent->left;
		old_node->parent = child;

		parent->left = child;
		child->left = old_node;

		return (child);
	}

	parent->left = child;

	return (child);
}
