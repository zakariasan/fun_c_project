#include "../includes/ft.h"
int     ft_max(int a, int b)
{
    return (a > b ?a:b);
}
int     btree_level_count(t_btree *root)
{
    if(!root || !root->left || !root->right)
        return (0);
    return (ft_max(btree_level_count(root->left), btree_level_count(root->right)) + 1 );
}
