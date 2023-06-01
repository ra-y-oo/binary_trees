#include <stdio.h>
#include <stdlib.h>

typedef struct binary_tree_t {
    int value;
    struct binary_tree_t *left;
    struct binary_tree_t *right;
}binary_tree_t;

binary_tree_t *binary_tree_nde(binary_tree_t *parent, int value) {
    binary_tree_t* result = malloc(sizeof(binary_tree_t));
    if (result != NULL) {
        result-> left = NULL;
        result-> right = NULL;
        result-> value = NULL;
    }
    return result;
}
