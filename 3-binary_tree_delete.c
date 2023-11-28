#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root of the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *parent;

	if (tree == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	parent = tree->parent;

	if (parent != NULL)
	{
		if (parent->left == tree)
			parent->left = NULL;
		else
			parent->right = NULL;
	}
	free(tree);
}

