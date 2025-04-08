#include "binary_trees.h"

/**
 * binary_tree_node - Creates a tree node
 * @parent: The parent pointer
 * @value: The value to be stored
 *
 * Return: pointer to the new child
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child = malloc(sizeof(binary_tree_t));

	if (!child)
		return (NULL);

	child->n = value;
	child->left = NULL;
	child->right = NULL;

	if (!parent)
	{
		child->parent = NULL;
		parent = child;

		return (parent);
	}

	child->parent = parent;

	return (child);
}
