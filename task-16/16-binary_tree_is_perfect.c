#include "../binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree) {
	if (!tree)
          return (0);
        if (!tree->left && !tree->right)
          return (1);

	if (tree->left && tree->right) {
		int l = binary_tree_is_perfect(tree->left);
		int r = binary_tree_is_perfect(tree->right);
                int lh = (int)binary_tree_height_nodes_16(tree->left);
		int rh = (int)binary_tree_height_nodes_16(tree->right);
		return ((l && r) && (lh == rh));
        }

	return (0);
}

size_t binary_tree_height_nodes_16(const binary_tree_t *tree) {
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height_nodes_16(tree->left);
	size_t right_height = binary_tree_height_nodes_16(tree->right);

        size_t ans = (left_height > right_height ? left_height : right_height);
	return (ans + 1);
}
