#include "../includes/ft.h"

t_list *ft_add_link(t_list *list, char *str)
{
    t_list *tmp;

    tmp = malloc(sizeof(tmp));
    if(tmp)
    {
        tmp->data = str;
        tmp->next = list;
    }
    return (tmp);
}
