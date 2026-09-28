#include "../binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if a node is a leaf or not
 * @node: the node to be checked
 *
 * Return: 1 if its a leaf and 0 otherwise. 0 if node is null
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
        if (node->left || node->right)
          return (0);

	return (1);
}
