#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of bt, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_subtree, right_subtree;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_subtree = binary_tree_height(tree->left);
	right_subtree = binary_tree_height(tree->right);

	if (left_subtree > right_subtree)
		return (left_subtree + 1);
	else
		return (right_subtree + 1);
}
