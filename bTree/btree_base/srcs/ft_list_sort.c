#include "../includes/ft.h"

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
 
    t_list *list;
    t_list *tmp;
    t_list *find;

    list = *begin_list;
    while(list)
    {
        tmp = *begin_list;
        while(tmp)
        {   
            if((*cmp)(list->data, tmp->data) < 0)
            {
                if(tmp == *begin_list)
                {
                    *begin_list = tmp->next;
                    find = *begin_list;
                }
                else
                    find->next = tmp->next;
                tmp->next = NULL;
                ft_list_merge(&list,tmp);
            }
            find  = tmp;
            tmp = tmp->next;
        }
        list = list->next;
      }


 
}

/*t_list *list;*/
    /*t_list *tmp;*/
    /*t_list *din;*/

    /*list = *begin_list;*/
    /*while(list)*/
    /*{*/
        /*tmp = *begin_list;*/
        /*while(tmp->next)*/
        /*{*/
            /*if((*cmp)(tmp->data, tmp->next->data) > 0)*/
            /*{*/
                /*din  = tmp->data;*/
                /*tmp->data = tmp->next->data;*/
                /*tmp->next->data = din;*/
            /*}*/
            /*tmp = tmp->next;*/
        /*}*/
        /*list = list->next;*/
    /*}*/
