#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t root;

	root.n = 98;
	root.parent = NULL;
	root.left = NULL;
	root.right = NULL;
	binary_tree_insert_left(&root, 54);
	binary_tree_insert_left(root.left, 44);

	binary_tree_print(&root);

        return (0);
}
