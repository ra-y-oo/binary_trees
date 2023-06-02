#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t* result = malloc(sizeof(binary_tree_t));
    if (result != NULL) {
        result->value = value;
        result->parent = parent;
        result-> left = NULL;
        result-> right = NULL;
        
    }
    return result;
}
