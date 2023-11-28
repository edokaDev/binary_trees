#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_is_root -checks if a node is a root of not.
 * @node: pointer to the node.
 * Return: 1 if node is a root or 0 if otherwise.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node == NULL) || (node->parent != NULL))
		return (0);
	return (1);
}
