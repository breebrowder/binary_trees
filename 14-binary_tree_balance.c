#include "binary_trees.h"

/**
 * height_of_tree - measure the height of a binary tree
 * @tree: pointer to root node of a binary tree
 * Return: the height or -1
 */

int height_of_tree(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (-1); /* condition */

	left_h = height_of_tree(tree->left);
	right_h = height_of_tree(tree->right);
	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

/**
 * binary_tree_balance- measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: if tree is NULL, your function must return 0
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h, balance;

	if (tree == NULL)
		return (0); /* condition */

	left_h = height_of_tree(tree->left) + 1;
	right_h = height_of_tree(tree->right) + 1;
	balance = left_h - right_h;
	return (balance);

}
