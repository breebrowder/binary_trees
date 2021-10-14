#include "binary_trees.h"

/**
 * binary_tree_sibling- finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: return a pointer to the sibling node
 **/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *oldestchild, *youngestchild;

	if (node == NULL)
		return (NULL); /* condition */

	parent = node->parent;

	if (parent == NULL)
		return (NULL); /* condition */

	oldestchild = parent->left;
	youngestchild = parent->right;

	if (oldestchild == node)
		return (youngestchild);

	return (oldestchild);
}
