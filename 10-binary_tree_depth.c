#include <stddef.h>
#include "binary_trees.h"
// Function to measure the depth of a node in a binary tree
size_t binary_tree_depth(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0;
    }

    // Recursively calculate the depth of the parent node
    size_t parent_depth = binary_tree_depth(tree->parent);

    // Return the depth of the parent node plus 1
    return parent_depth + 1;
}