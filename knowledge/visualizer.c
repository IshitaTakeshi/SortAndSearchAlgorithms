#include <stdio.h>
#include "classifier.h"

//TODO move to an external file
void show_tree_(Node *node, int depth) {
    if(node->isleaf) {
        return;
    }
    
    int i; 
    for(i=0; i<depth; i++) {
        printf(" ");
    }

    printf("key:%d criterion:%d\n", node->key, node->criterion);

    depth += 1;
    show_tree_(node->left, depth);
    show_tree_(node->right, depth);
}

void show_tree(Node *node) {
    show_tree_(node, 0);
}
