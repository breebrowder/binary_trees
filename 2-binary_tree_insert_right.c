#include "binary_trees.h"

/**
 * binary_tree_insert_right- inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on fail, or if parent is NULL
 **/

/* Note: If parent already has a right-child, new node must take its place, */
/*   and the old right-child must be set as the right-child of the new node. */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *created_child; /* pointer to right child */

	if (parent == NULL)
		return (NULL); /* condition: failure */

	created_child = binary_tree_node(parent, value); /* initialize child */

	if (created_child == NULL)
		return (NULL); /* condition: failure */

	if (parent->right != NULL)
	{
		parent->right->parent = created_child;
		created_child->right = parent->right;
		parent->right = created_child;
	}
	else
		parent->right = created_child;

	return (created_child);
}
