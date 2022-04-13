#include "../includes/ft.h"

int g_level;

void    btree_apply_to_level(
        t_btree *root, 
        int level, 
        int first_elem,
        void (*applyf)(void *item, int current_level, int is_first_elem))
{
    if(level == g_level)
    {
        (*applyf)(root->item, level, first_elem);
        return ;
    }
    if(root->left)
        btree_apply_to_level(root->left, level + 1, first_elem, applyf);
    if(root->right)
        btree_apply_to_level(root->right, level + 1, 0, applyf);
}

void btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
    int level;

    level = btree_level_count(root);
    while(g_level < level)
    {
        btree_apply_to_level(root,0,1,applyf);
        g_level++;
    }
}
 
