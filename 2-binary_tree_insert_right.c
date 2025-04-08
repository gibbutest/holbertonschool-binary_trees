#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts new node to the left
 * @parent: The parent pointer
 * @value: The value to be stored.
 *
 * Return: pointer to the new child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));
	binary_tree_t *old_node;

	if (!parent || !child)
	{
		free(child);
		return (NULL);
	}

	child->n = value;
	child->left = NULL;
	child->right = NULL;
	child->parent = parent;

	if (parent->right)
	{
		old_node = parent->right;
		old_node->parent = child;

		parent->right = child;
		child->right = old_node;

		return (child);
	}

	parent->right = child;

	return (child);
}
