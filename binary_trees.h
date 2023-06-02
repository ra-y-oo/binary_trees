#ifndef BINARY_TREEs_H
#define BINARY_TREEs_H

typedef struct binary_tree {
    int value;
    struct binary_tree *parent;
    struct binary_tree *left;
    struct binary_tree *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
#endif /* BINARY_TREE_H */
