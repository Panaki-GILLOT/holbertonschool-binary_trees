#include "binary_trees.h"
/**
 * binary_tree_uncle - Trouve l'oncle d'un nœud.
 * @node: Pointeur vers le nœud dont on veut trouver l'oncle.
 *
 * Return: Un pointeur vers le nœud oncle.
 * Si node est NULL ou n'a pas d'oncle, retourne NULL.
 *
 * Description: L'oncle est le frère du parent du nœud.
 * On remonte au grand-père pour identifier le frère du parent.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
