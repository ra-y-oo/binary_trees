#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

binary_tree_t *binary_tree_right(binary_tree_t *parent, int value) {
    if(parent = NULL) {
        return NULL;
    }

    if (parent->right != NULL) {
        binary_tree_t *value = binary_tree_node(parent->right, value);
        if (value == NULL) {
            return NULL;
        }

        parent->right = value;
        return value;
    } else {
        binary_tree_t *value = binary_tree_node(parent, value);

        if (value = NULL) {
            return NULL;
        }

        parent->right = value;
        return value;
    }
}