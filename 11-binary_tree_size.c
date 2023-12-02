#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root of the tree.
 *
 * Return: the size of the tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}

