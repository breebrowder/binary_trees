#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 **/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree_node; /* binary tree node being created */

        binary_tree_node = malloc(sizeof(binary_tree_t));

	if (binary_tree_node == NULL)
		return (NULL); /* condition */


	binary_tree_node->n = value;
	binary_tree_node->parent = parent;

	binary_tree_node->left = NULL; /* no child */
	binary_tree_node->right = NULL; /* no child */

	return (binary_tree_node);
}
