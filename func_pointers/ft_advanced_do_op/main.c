#include "./includes/ft.h"
#include "./includes/ft_opp.h"
int main(int ac, char **av)
{
     void (*func_res[5])(int, int);
     char *operator;
     int i;

     if(ac == 4 )
    {
        i = 0;
        while((gl_opptab + i)->op)
        {
            if(ft_strcmp((gl_opptab + i)->op , av[2]) == 0)
            {
                (gl_opptab + i)->f(ft_atoi(av[1]), ft_atoi(av[3]));
                return(0);
            }
            i++;
        }
                (gl_opptab + 5)->f(ft_atoi(av[1]), ft_atoi(av[3]));
    }
   
    return (0);
}
