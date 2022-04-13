#include "../includes/ft.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *back;
    t_list *list;

    back = ft_create_elem(data);
    if(!*begin_list)
    {
        *begin_list = back;
    }
    else
    {
        while((*begin_list)->next != NULL)
            (*begin_list) = (*begin_list)->next;
        (*begin_list)->next = back;
    }
}
