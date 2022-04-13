#include "../includes/ft.h"

void ft_list_reverse(t_list **begin_list)
{
    t_list *list;
    t_list *tmp;

    tmp = NULL;
    list = *begin_list;
    while(list)
    {
        if(list->next)
        {
            (*begin_list) = (*begin_list)->next;
            list->next = tmp;
            tmp = list;
            list = (*begin_list);
        }
        else
        {
            list = list->next;
            (*begin_list)->next = tmp;
        }
    }
}
