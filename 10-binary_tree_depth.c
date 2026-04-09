#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_depth - Mesure la profondeur d'un nœud dans un arbre binaire.
 * @tree: Pointeur vers le nœud dont on veut mesurer la profondeur.
 *
 * Return: La profondeur du nœud.
 * Si tree est NULL ou est la racine, retourne 0.
 *
 * Description: La profondeur est la distance entre un nœud et la racine.
 * On remonte l'arbre en suivant les pointeurs parents.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
