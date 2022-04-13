#include "./includes/ft.h"
void add(int a, int b)
{
    ft_putnbr(a + b);
    ft_putstr("\n");
}

void sub(int a, int b)
{
    ft_putnbr(a - b);
    ft_putstr("\n");
}

void mul(int a, int b)
{
    ft_putnbr(a * b);
    ft_putstr("\n");
}

void divi(int a, int b)
{
    if(b == 0)
    {
        ft_putstr("Stop : division by zero");
    ft_putstr("\n");
    }else
    {
     ft_putnbr(a / b);
    ft_putstr("\n");
    }
}

void mod(int a, int b)
{
    if(b == 0)
    {
        ft_putstr( "Stop : modulo by zero");
    ft_putstr("\n");
    }
    else
    { 
        ft_putnbr(a % b);
    ft_putstr("\n");
    }
}
int main(int ac, char **av)
{
    void (*func_res[5])(int, int);
    char *operator;
    int i;

    if(ac == 4 )
    {
        i = -1;
        operator = "+-*/%";
        func_res[0] = &add;
        func_res[1] = &sub;
        func_res[2] = &mul;
        func_res[3] = &divi;
        func_res[4] = &mod;
        while(++i < 5)
            if(av[2][0] == operator[i])
            {
                func_res[i](ft_atoi(av[1]), ft_atoi(av[3]));
                i = 6;
            }
        if(i == 5 )
            ft_putstr("0\n");
    }
    return (0);
}
