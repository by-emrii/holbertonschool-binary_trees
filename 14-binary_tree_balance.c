#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: ptr to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	int balance_factor;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left_height = 0;
	else
		left_height = (int)binary_tree_height(tree->left) + 1;

	if (tree->right == NULL)
		right_height = 0;
	else
		right_height = (int)binary_tree_height(tree->right) + 1;

	balance_factor = left_height - right_height;

	return (balance_factor);
}
