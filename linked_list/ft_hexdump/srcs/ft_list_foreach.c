#include "../includes/ft.h"
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *el;

    el = begin_list;
    while(el)
    {
        (*f)(el->data);
        el = el->next;
    }
}
