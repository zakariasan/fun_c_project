#include "./includes/ft.h"
#include "./includes/ft_opp.h"

int main(int ac, char **av)
{
    t_list *list;
    list = ft_list_push_params(ac, av);
    ft_print_list(list);
    ft_list_reverse(&list);
    ft_putstr("\n reverse func-----\n");
    ft_print_list(list);
    return (0);
}





    /*list = NULL;*/
    /*list = ft_add_link(list,"zakaria->\n");*/
    /*list = ft_add_link(list,"Hamza->\n");*/
    /*list = ft_add_link(list,"tata->\n");*/
    /*ft_print_list(ft_list_last(list));*/
    /*ft_putnbr(ft_list_size(list));*/
    /*ft_putstr("----------------\n");*/
    /*ft_list_push_back(&list, "back_puch>>>>>\n");*/

    /*ft_print_list(ft_list_last(list));*/

