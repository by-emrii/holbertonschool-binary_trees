#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the rightchild of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a ptr to the created node, or NULL if fail or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node; /* old childs parent is now new node*/
	}
	parent->right = new_node;

	return (new_node);
}
