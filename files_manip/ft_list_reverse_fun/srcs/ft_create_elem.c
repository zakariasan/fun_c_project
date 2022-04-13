#include "../includes/ft.h"

t_list *ft_create_elem(void *data)
{
    t_list *tmp;

    tmp = NULL;
    tmp = malloc(sizeof(tmp));
    if(tmp)
    {
        tmp->data = data ;
        tmp->next = NULL;
    }
    return (tmp);
}
