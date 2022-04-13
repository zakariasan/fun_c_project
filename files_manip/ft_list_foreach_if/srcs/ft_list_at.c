#include "../includes/ft.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    t_list *el;
    unsigned int s;

    s = 1;
    el = begin_list;
    while(el)
    {
        if(s == nbr)
            return (el);
        el = el->next;
        s++;
    }
    return(NULL);
}
