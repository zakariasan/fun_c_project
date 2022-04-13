#include "../includes/ft.h"

void btree_add_node(t_btree **tree, void *key)
{
    t_btree *node;
    t_btree *tmp;
    t_btree *elem;

    elem = btree_create_node(key);
    tmp = *tree;
    if(tmp)
    {
     while(tmp)
        {
            node = tmp;
            if(key > tmp->item)
            {
                tmp = tmp->right;
                if(!tmp)
                    node->right = elem;
            }else
            {
                tmp = tmp->left;
                if(!tmp)
                    node->left = elem;
            }
        }
    }else
        *tree = elem;
}
