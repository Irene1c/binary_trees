#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node1;
	size_t node2;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}
	node1 = binary_tree_nodes(tree->left);
	node2 = binary_tree_nodes(tree->right);

	return (node1 + node2);
}
