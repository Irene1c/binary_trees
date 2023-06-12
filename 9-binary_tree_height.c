#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of binary tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t cl;
	size_t cr;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	cl = binary_tree_height(tree->left);
	cr = binary_tree_height(tree->right);

	if (cl > cr)
		return (cl + 1);
	else
		return (cr + 1);
}
