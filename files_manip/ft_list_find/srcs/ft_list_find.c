#include "../includes/ft.h"

t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *find;

    find = begin_list;
    while(find)
    {
        if((*cmp)(find->data, data_ref) == 0)
            return (find);
        find = find->next;
    }
    return(NULL);
}
