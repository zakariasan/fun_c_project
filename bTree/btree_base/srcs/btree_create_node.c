#include "../includes/ft.h"

t_btree *btree_create_node(void *item)
{
    t_btree *tree;

    tree =NULL;
    tree =(t_btree*) malloc(sizeof(tree));
    if(tree)
    {
        tree->item  = item;
        tree->left  = 0;
        tree->right = 0;
    }
    return (tree);
}
