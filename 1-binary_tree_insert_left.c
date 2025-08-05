#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a ptr to the created node, or NULL if fail or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/* if parent already has left node child, push it down */
	if (parent->left != NULL)
	{
		/* connect newnode's left ptr to old left child (A) */
		new_node->left = parent->left;
		parent->left->parent = new_node; /*update A's parent to newnode*/
	}
	parent->left = new_node;

	return (new_node);
}
