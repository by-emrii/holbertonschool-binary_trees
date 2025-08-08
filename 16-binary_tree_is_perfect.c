#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: ptr to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	/* if its a leaf */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* if both left and right exist*/
	if (tree->left && tree->right)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		/* not perfect */
		if (left_height != right_height)
			return (0);
		/* check if both subtrees are perfect */
		return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	}
	return (0); /* if one child is missing */
}
