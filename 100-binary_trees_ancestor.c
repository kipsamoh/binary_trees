#include "binary_trees.h"

/**
 * recursive_depth - _measures the _depth of a _node in a _binary tree
 *
 * @tree: _tree root
 * Return: _depth of a _node in a _binary tree
 */
size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - c_alls recur_sive_depth _to _return the _depth
 * of a _node in a _binary tree
 *
 * @tree: _tree _root
 * Return: _depth of the _tree or 0 if _tree is NULL;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}

/**
 * binary_tree_uncle - _finds the _lowest common _ancestor of two _nodes
 *
 * @first: _pointer to the _first node
 * @second: _pointer to the _second node
 * Return: _pointer to the _lowest common _ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));

	if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second->parent));
}
