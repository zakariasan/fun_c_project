#include "./includes/ft.h"
#include "./includes/ft_opp.h"
/*void ft_list_sort(t_list **begin_list, int (*cmp)())*/
/*{*/
    /*t_list *list;*/
    /*t_list *tmp;*/
    /*t_list *find;*/

    /*list = *begin_list;*/
    /*while(list)*/
    /*{*/
        /*tmp = *begin_list;*/
        /*while(tmp)*/
        /*{   */
            /*if((*cmp)(list->data, tmp->data) < 0)*/
            /*{*/
                /*if(tmp == *begin_list)*/
                /*{*/
                    /**begin_list = tmp->next;*/
                    /*find = *begin_list;*/
                /*}*/
                /*else*/
                    /*find->next = tmp->next;*/
                /*tmp->next = NULL;*/
                /*ft_list_merge(&list,tmp);*/
            /*}*/
            /*find  = tmp;*/
            /*tmp = tmp->next;*/
        /*}*/
        /*list = list->next;*/
      /*}*/
/*}*/



int main(int ac, char **av)
{
    t_list *list;
    list = ft_list_push_params(ac, av);
    ft_print_list(list);
    ft_putstr("\n Sort func-----\n");
    ft_list_sort(&list, &ft_strcmp);
    ft_print_list(list);
    return (0);
}





   /*ft_list_push_back(&list, "back_puch>>>>>\n");*/

    /*ft_print_list(ft_list_last(list));*/

