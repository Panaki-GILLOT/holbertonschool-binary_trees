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
 * get_size - Calcule la taille (nombre de nœuds) d'un arbre binaire.
 * @tree: Pointeur vers le nœud racine de l'arbre.
 *
 * Return: Le nombre total de nœuds. Si tree est NULL, retourne 0.
 */
size_t get_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + get_size(tree->left) + get_size(tree->right));
}
/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait.
 * @tree: Pointeur vers le nœud racine de l'arbre à vérifier.
 *
 * Return: 1 si l'arbre est parfait, sinon 0.
 * Si tree est NULL, retourne 0.
 *
 * Description: Un arbre est parfait si tous les niveaux sont remplis.
 * On utilise la formule : size = 2^(height + 1) - 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	size = get_size(tree);
	return (size == (size_t)(1 << height) - 1);
}
