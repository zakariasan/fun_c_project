#include "../includes/ft.h"
    
void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
t_list *el;

    el = begin_list;
    while(el)
    {
        if((*cmp)(el->data, data_ref) == 0)
        {
            (*f)(el->data);
        }
            el = el->next;
    }
}
