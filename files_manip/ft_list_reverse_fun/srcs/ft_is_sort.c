#include"../includes/ft.h"

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i;

    i = 1;
    while(f(tab[i - 1], tab[i]) == 0)
        i++;
    if(f(tab[i - 1], tab[i]) < 0)
    {
        while(tab[++i])
        {
            if(f(tab[i - 1], tab[i]) > 0)
                return (0);
        }
    }
    if(f(tab[i - 1], tab[i]) > 0)
    {
        while(tab[++i])
        {
            if(f(tab[i - 1], tab[i]) < 0)
                return (0);
        }
    }
    return (1);
}
