#include "../includes/ft.h"

void ft_list_clear(t_list **begin_list)
{
    t_list *tmp;

    tmp = NULL;
    while(*begin_list)
    {
        if((*begin_list)->next)
            tmp = (*begin_list)->next;
        else
            tmp = NULL;
        free(*begin_list);
         *begin_list = tmp;
    }
}
