#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire.
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer.
 *
 * Return: La hauteur de l'arbre. Si tree est NULL, retourne 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);

	return (1 + right_height);
}

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire.
 * @tree: Pointeur vers le nœud racine de l'arbre à mesurer.
 *
 * Return: Le facteur d'équilibre. Si tree est NULL, retourne 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((int)left - (int)right);
}
