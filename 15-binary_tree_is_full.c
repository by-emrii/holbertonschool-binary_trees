#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: ptr to the root node of the tree to check
 * Return: 1 if tree is full, null if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if node has 2 children, check subtrees */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* else node only has one child */
	return (0);
}
