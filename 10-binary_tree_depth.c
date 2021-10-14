#include "binary_trees.h"

/**
 * binary_tree_depth- measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: if tree is NULL, your function must return 0
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t theDepth = 0;

	if (tree == NULL)
		return (0); /* condition */

	while (tree->parent != NULL)
	{
		theDepth += 1;
		tree = tree->parent;
	}
	return (theDepth);
}
