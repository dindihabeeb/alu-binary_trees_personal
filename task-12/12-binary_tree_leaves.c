#include "../binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree) {
  if (!tree)
    return (0);

  if (!tree->left && !tree->right)
    return (1);

  size_t left = binary_tree_leaves(tree->left);
  size_t right = binary_tree_leaves(tree->right);

  return (left + right);
}
