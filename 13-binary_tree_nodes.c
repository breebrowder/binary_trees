#include "binary_trees.h"

/**
 * binary_tree_nodes- counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: if tree is NULL, your function must return 0
 **/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0); /* condition */

	if (tree->left != NULL)
		total += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		total += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (total + 1);
	else
		return (total);
}
