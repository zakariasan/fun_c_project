#include "../includes/ft.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *find;
    t_list *tmp;
    t_list *list;

    while((*begin_list) && (*cmp)((*begin_list)->data, data_ref) == 0)
    {
        find = (*begin_list);
        (*begin_list) = (*begin_list)->next;
        free(find);
    }
    find = (*begin_list);
    while(find && find->next)
    {
        if((*cmp)(find->next->data, data_ref) == 0)
        {
            tmp = find->next;
            find->next = tmp->next;
            free(tmp);
        }
            find = find->next;
    }
}
