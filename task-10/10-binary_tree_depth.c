#include "../binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree) {
	if (tree == NULL)
		return (0);

        size_t ans = binary_tree_depth(tree->parent);

        if (tree->parent)
		ans += 1;
	return (ans);
}
