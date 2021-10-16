#include "binary_trees.h"
#define BTIP binary_tree_is_perfect

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
		total += binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		total += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (total + 1);
	else
		return (total);
}

/**
 * binary_tree_is_perfect- function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: if tree is NULL, your function must return 0
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

/* Leaf? yes or no */
	if (!tree->left && !tree->right)
		return (1);

/* Is the # of leaves odd? */
	if (binary_tree_leaves(tree) % 2 == 1)
		return (0);

/* check if left and right subtrees are full */
	if (tree->left && tree->right)
		return (BTIP(tree->left) && BTIP(tree->right));

	return (0);
}
