#include "../includes/ft.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *front;

    front = ft_create_elem(data);
    if(*begin_list)
        front->next= (*begin_list);
    *begin_list = front;
}
