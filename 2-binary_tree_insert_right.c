#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node.
 * @parent: Pointer to the parent node.
 * @value: data to store in new node.
 *
 * Return: Pointer to the creaded node,
 * or NULL on failure or if @parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *prev_right;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		prev_right = parent->right;
		parent->right = new;
		new->right = prev_right;
		prev_right->parent = new;
	} else
	{
		parent->right = new;
		new->right = NULL;
	}
	new->n = value;
	new->left = NULL;
	new->parent = parent;

	return (new);
}
