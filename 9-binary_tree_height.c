#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree) {
    if(tree == NULL) {
        return 0;
    }

     // Recursively calculate the height of the left and right subtrees
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    // Return the maximum of the left and right subtree heights, plus 1 for the current node
    return (left_height > right_height ? left_height : right_height) + 1;

}