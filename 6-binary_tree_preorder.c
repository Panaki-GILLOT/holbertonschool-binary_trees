#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - Parcourt un arbre binaire en utilisant
 * le parcours pré-ordre.
 * @tree: Pointeur vers la racine de l'arbre à parcourir.
 * @func: Pointeur vers une fonction à appeler pour chaque nœud.
 *
 * Description: La valeur de chaque nœud est passée en paramètre à func.
 * Si tree ou func est NULL, la fonction ne fait rien.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
