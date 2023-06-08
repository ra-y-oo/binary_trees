#include "binary_trees.h"

/**
 * binary_tree_ancestor- returns lowest common ancestor
 * @first: first node
 *  @second: second node
 * Return: pointer of lowest common ancestor
 */

#include <stdlib.h>

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second) {
    const binary_tree_t *ancestor = first;

    while (ancestor != NULL) {
        if (is_ancestor(ancestor, second))
            return (binary_tree_t *)ancestor;
        
        ancestor = ancestor->parent;
    }

    return NULL;
}
