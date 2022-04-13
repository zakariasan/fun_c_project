
int ft_atoi(char *str)
{
    int i;
    int nbr;
    int mul;
    int neg;

    i = -1;
    nbr = 0;
    mul = 1;
    neg = 0;
    while(str[++i]  <= ' ');
    if(str[i] == '-' || str[i] == '+')
        str[i++] == '-' ? neg = 1 : neg;
    while(str[i] >= '0' && str[i]<= '9')
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }
    return (neg == 1 ?-nbr :nbr);
}


