#include "../binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - a function that inserts a node as the right child\
 of another node
 * @parent: the parent of the new node
 * @value: the value of the node
 *
 * Return: the new node created (Success) or NULL upon failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = node;
		return (node);
	}

	binary_tree_t *new_right = malloc(sizeof(*new_right));

	new_right = parent->right;
	parent->right = node;
	node->right = new_right;
        return (node);
}
