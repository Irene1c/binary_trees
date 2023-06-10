#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *b_new;

	b_new = malloc(sizeof(binary_tree_t));
	if (b_new == NULL)
		return (NULL);

	b_new->n = value;
	b_new->left = NULL;
	b_new->right = NULL;
	b_new->parent = parent;

	return (b_new);
}
