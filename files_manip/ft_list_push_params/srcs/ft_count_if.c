#include"../includes/ft.h"

int ft_count_if(char **tab, int(*f)(char*))
{
    int i;
    int count;

    count = 0;
    i = 0;
    while(tab[i])
    {
        if(f(tab[i]))
            count++;
        i++;
    }
    return (count);
}
