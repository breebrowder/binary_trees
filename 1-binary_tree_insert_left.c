#include "binary_trees.h"

/**
 * binary_tree_insert_left- inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on fail, or if parent is NULL
 **/

/* Note: If parent already has a left-child, new node must take its place, */
/*   and the old left-child must be set as the left-child of the new node. */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *created_child; /* pointer to left child */

	if (parent == NULL)
		return (NULL); /* condition: failure */

	created_child = binary_tree_node(parent, value); /* initialize child */

	if (created_child == NULL)
		return (NULL); /* condition: failure */

	if (parent->left != NULL)
	{
		parent->left->parent = created_child;
		created_child->left = parent->left;
		parent->left = created_child;
	}
	else
		parent->left = created_child;

	return (created_child);
}
