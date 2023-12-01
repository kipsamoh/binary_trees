#include "binary_trees.h"


bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *_tree;
	size_t _i;

	_tree = NULL;

	for (_i = 0; _i < size; _i++)
	{
		bst_insert(&_tree, array[_i]);
	}

	if (_i == size)
		return (_tree);

	return (NULL);
}
