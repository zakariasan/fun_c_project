#include "../includes/ft.h"

void ft_sort_wordtab(char **tab)
{
    char *tmp;
    int i;
    int j;

    i = 0;
    while(tab[i] != 0)
    {
        j = i + 1;
        while(tab[j] != 0)
        { 
            if(ft_strcmp(tab[i], tab[j]) > 0)
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
