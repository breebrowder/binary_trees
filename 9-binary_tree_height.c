#include "binary_trees.h"

/**
 * binary_tree_height- function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: if tree is NULL, function must return 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

/* Get the tree height */
	if ((!tree) || ((!tree->left) && (!tree->right)))
		return (0);
/* Find the height of both subtrees and use the larger one */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
