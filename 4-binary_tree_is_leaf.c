#include "binary_trees.h"

/**
 * binary_tree_is_leaf- checks if a nod eis a leaf
 *
 * @node: pointer to the node to check
 *
 * Return: return 1 if node is a leaf, otherwise 0
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0); /* condition */

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0); /* condition */
}

/* A leaf node has no child */
