#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf1;
	size_t leaf2;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	leaf1 = binary_tree_leaves(tree->left);
	leaf2 = binary_tree_leaves(tree->right);

	return (leaf1 + leaf2);
}
