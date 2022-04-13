#include"../includes/ft.h"

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *table;

    i = 0;
    if(!(table = (int *)malloc(sizeof(int)*length)))
            return (NULL);
    while(i < length)
    {
        table[i] = f(tab[i]);
        i++;
    }
    return table;
}
