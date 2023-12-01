#include "binary_trees.h"

/**
 * binary_tree_node - _Creates a _binary tree mode
 *
 * @parent: node _parent
 * @value: node _value
 * Return: _pointer to the _new node or NULL on _failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
