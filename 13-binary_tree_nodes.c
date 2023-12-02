#include "binary_trees.h"
#include "stdlib.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree.
 * @tree: pointer to the root of the tree.
 *
 * Return: the size of the tree.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL) || (tree->right != NULL))
		nodes++;

	nodes = nodes + binary_tree_nodes(tree->left);
	nodes = nodes + binary_tree_nodes(tree->right);

	return (nodes);
}
