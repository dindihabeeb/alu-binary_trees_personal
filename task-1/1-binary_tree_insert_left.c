#include "../binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - a function that inserts a node as the left child\
 of another node
 * @parent: the parent of the new node
 * @value: the value of the node
 *
 * Return: the new node created (Success) or NULL upon failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = node;
		return (node);
	}

	binary_tree_t *new_left = malloc(sizeof(*new_left));

	new_left = parent->left;
	parent->left = node;
	node->left = new_left;
        return (node);
}
