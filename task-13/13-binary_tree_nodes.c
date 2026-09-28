#include "../binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree) {
	if (!tree)
		return (0);

	if ((tree->right && !tree->left) || (!tree->right && tree->left))
		return (1);

	size_t left = binary_tree_nodes(tree->left);
	size_t right = binary_tree_nodes(tree->right);
	size_t ans = left + right;

        if (tree->left || tree->right)
		ans += 1;

	return (ans);
}
