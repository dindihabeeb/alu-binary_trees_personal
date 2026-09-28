#include "../binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree) {
	if (!tree)
		return (0);

	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

        int ans = (int)left - (int)right;

	return (ans);
}

size_t binary_tree_height_nodes(const binary_tree_t *tree) {
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

        size_t ans = (left_height > right_height ? left_height : right_height);
	return (ans + 1);
}
