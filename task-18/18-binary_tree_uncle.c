#include "../binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node) {
	if (!node)
		return (NULL);
	if (!node->parent)
          return (NULL);
	return binary_tree_sibling_18(node->parent);
}

binary_tree_t *binary_tree_sibling_18(binary_tree_t *node) {
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	binary_tree_t *sib =
		node->parent->right == node ? node->parent->left : node->parent->right;

	return (sib);
}
