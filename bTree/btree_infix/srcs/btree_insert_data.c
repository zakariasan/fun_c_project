#include "../includes/ft.h"

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(char *,char *))
{

t_btree *tmp;
    if(!(*root) || !item || !root)
    {
        if(item && root)
            *root = btree_create_node(item);
        return ;
    }
    tmp = *root;
    if(cmpf(item , tmp->item) < 0)
    {
        if(tmp->left)
            btree_insert_data(&tmp->left, item ,cmpf);
        else
            tmp->left = btree_create_node(item);
    }
    else
    {
        if(tmp->right)
            btree_insert_data(&tmp->right, item ,cmpf);
        else
            tmp->right = btree_create_node(item);
    }
}



