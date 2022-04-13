#include "../includes/ft.h"

void    ft_print_list(t_list *list)
{
    while(list)
    {
        ft_putstr(list->str);
        list = list->next;
    }
}
