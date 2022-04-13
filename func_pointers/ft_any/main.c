#include "./includes/ft.h"

int main()
{
    int i = 0;
    int tab[] = {1,1,2,3,4,5};
    ft_foreach(tab, 6, &ft_putnbr);
    return (0);
}
