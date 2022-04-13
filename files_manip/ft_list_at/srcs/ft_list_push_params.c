#include "../includes/ft.h"
t_list *ft_list_push_params(int ac, char **av)
{
    int count;
    t_list *list;
    t_list *tmp;

    count = 1;
    list = NULL;
    while(count < ac)
    {
       tmp = ft_create_elem(av[count++]);
       tmp->next = list;
       list = tmp;
    }
    return(list);
}
