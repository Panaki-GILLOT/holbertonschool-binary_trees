#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - Compte le nombre de feuilles dans un arbre binaire.
 * @tree: Pointeur vers le nœud racine de l'arbre pour compter les feuilles.
 *
 * Return: Le nombre de feuilles dans l'arbre.
 * Si tree est NULL, la fonction doit retourner 0.
 *
 * Description: Un nœud sans enfant (gauche et droit sont NULL) est
 * considéré comme une feuille.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
