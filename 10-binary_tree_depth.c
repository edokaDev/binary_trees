#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the root of the tree.
 *
 * Return: the depth of the node.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if ((tree == NULL) || (tree->parent == NULL))
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
