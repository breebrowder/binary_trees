#include "binary_trees.h"

/**
 * binary_tree_leaves- counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: if tree is NULL, your function must return 0
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0); /* condition */

	if (tree->left != NULL)
		counter += binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		counter += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (total + 1);
	else
		return (total);
}
