#include "../binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node) {
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	binary_tree_t *sib =
		node->parent->right == node ? node->parent->left : node->parent->right;

	return (sib);
}
