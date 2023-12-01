#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{
	int _root = 0;

	if (node && !(node->parent))
		_root = 1;

	return (_root);
}
