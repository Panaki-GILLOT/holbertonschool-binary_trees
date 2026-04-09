#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - Insère un nœud comme enfant
 * droit d'un autre nœud.
 * @parent: Pointeur vers le nœud où insérer l'enfant droit.
 * @value: La valeur à stocker dans le nouveau nœud.
 *
 * Return: Un pointeur vers le nouveau nœud, ou NULL en cas d'échec
 * ou si le parent est NULL.
 *
 * Description: Si le parent a déjà un enfant droit, le nouveau nœud prend
 * sa place, et l'ancien enfant droit devient l'enfant droit du nouveau nœud.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL) /** vérif si il y de la place */
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
/** le nouveau prend la place de précédent */
		parent->right->parent = new_node;
/** le nouveau parent de parent->right est new_node */
	}
	parent->right = new_node;

	return (new_node);
}
