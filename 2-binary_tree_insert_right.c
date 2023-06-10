#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *b_new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	b_new = malloc(sizeof(binary_tree_t));
	if (b_new == NULL)
		return (NULL);

	b_new->n = value;
	b_new->left = NULL;
	b_new->right = NULL;
	b_new->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = b_new;
		return (b_new);
	}
	else
	{
		temp = parent->right;
		parent->right = b_new;
		b_new->right = temp;
		/*update the parent pointer of the old right child*/
		temp->parent = b_new;
		return (b_new);
	}
}
