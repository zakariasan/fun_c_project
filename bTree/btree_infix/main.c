#include "./includes/ft.h"
#include "./includes/ft_opp.h"
#include <errno.h>
#include <fcntl.h>


void    btree_print_tree(t_btree *root)
{

   if(root->left)
   {
       ft_putstr("  ");
       btree_print_tree(root->left);
       ft_putstr("  ");
   }
       ft_putstr(root->item);
       ft_putstr("\n");
   if(root->right)
   {

       ft_putstr("  ");
       btree_print_tree(root->right);

   }
}
int		main(int argc, char **argv)
{
	t_btree *root;

	root = btree_create_node("C");
/*    root->left = btree_create_node("B");*/
    /*root->right = btree_create_node("C");*/

    root->left = btree_create_node("A");
    root->right = btree_create_node("D");
    btree_insert_data(&root, "B" , &ft_strcmp);
    btree_insert_data(&root, "C" , &ft_strcmp);
    btree_print_tree(root);
	return (0);
}
