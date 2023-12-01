#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the _left-child of _another node
 *
 * @parent: node _parent
 * @value: node _alue
 * Return: pointer to _the new _node or NULL on _failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new;

	parent->left = new;

	return (new);
}
