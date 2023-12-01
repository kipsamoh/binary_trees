#include "binary_trees.h"

/**
 * binary_tree_sibling - _find the _sibling of a node
 *
 * @node: _node
 * Return: _pointer to the _sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
