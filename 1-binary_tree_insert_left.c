#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: Pointer to the parent node.
 * @value: data to store in new node.
 *
 * Return: Pointer to the creaded node,
 * or NULL on failure or if @parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *prev_left;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		prev_left = parent->left;
		parent->left = new;
		new->left = prev_left;
		prev_left->parent = new;
	} else
	{
		parent->left = new;
		new->left = NULL;
	}
	new->n = value;
	new->right = NULL;
	new->parent = parent;

	return (new);
}
