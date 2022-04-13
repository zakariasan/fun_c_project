#include "./includes/ft.h"
#include "./includes/ft_opp.h"

int main(int ac, char **av)
{
    t_list *list;

    list = NULL;
   /* list = ft_add_link(list,"zakaria->");*/
    /*list = ft_add_link(list,"Hamza->");*/
    /*list = ft_add_link(list,"tata->");*/
    /*ft_print_list(list);*/
    ft_putstr("----------------\n");
    ft_list_push_back(&list, "back_puch");

    ft_print_list(list);
    return (0);
}
