#include "binary_trees.h"

bst_t *r_case(bst_t *node, bst_t *root)
{
	node->right->left = node->left;
	node->right->parent = node->parent;
	if (node->parent)
	{
		if (node == node->parent->left)
			node->parent->left = node->right;
		if (node == node->parent->right)
			node->parent->right = node->right;
	}
	if (node->left)
		node->left->parent = node->right;
	if (root == node)
		root = node->right;
	free(node);
	return (root);
}

bst_t *r_l_case(bst_t *node, bst_t *root)
{
	node->right->left->right = node->right;
	node->right->left->parent = node->parent;
	node->right->left->left = node->left;
	if (node->left)
		node->left->parent = node->right->left;
	node->right->parent = node->right->left;
	if (root == node)
		root = node->right->left;
	else
	{
		if (node == node->parent->left)
			node->parent->left = node->right->left;
		if (node == node->parent->right)
			node->parent->right = node->right->left;
	}
	node->right->left = NULL;
	free(node);
	return (root);
}


int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && !(node->left) && !(node->right))
		leaf = 1;

	return (leaf);
}


bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree && value < tree->n)
		return (bst_search(tree->left, value));

	if (tree && value > tree->n)
		return (bst_search(tree->right, value));

	return ((bst_t *)tree);
}


bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *_node;

	_node = bst_search(root, value);

	if (_node != NULL)
	{
		if (binary_tree_is_leaf(_node) == 1)
		{
			if (_node == _node->parent->left)
				_node->parent->left = NULL;
			if (_node == _node->parent->right)
				_node->parent->right = NULL;
			free(_node);
			return (_root);
		}
		if (_node->right && _node->right->left)
			root = r_l_case(_node, root);
		else if (_node->right)
			root = r_case(_node, root);
		else
		{
			if (_node->parent)
				n_ode->parent->right = no_de->left;
			no_de->left->parent = no_de->parent;
			if (root == no_de)
				root = no_de->left;
			free(node);
		}
	}
	return (root);
}
