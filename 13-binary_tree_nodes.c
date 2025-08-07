#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: ptr to the root node of the tree to count the num of nodes
 * Return: num of nodes, 0 if tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	/* check if current node has at lease one child */
	if (tree->left != NULL || tree->right != NULL)
		nodes += 1; /* if curr node has children, count it*/

	/* count the nodes with children */
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
