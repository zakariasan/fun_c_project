#include "../includes/ft.h"
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while(*str)
        ft_putchar(*str++);
}


int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(*(str + i))
        i++;
    return i;
}
void ft_putnbr(int n)
{
    int  i;

    i = 10;
    if(n < 0)
    {
        ft_putchar('-');
        n =-n;
    }
    while(n / i)
    {
        i *= 10;
    }
        i /= 10;
    while(i != 1)
    {
        ft_putchar(n / i + '0');
        n %=i;
        i /= 10;
    }
  ft_putchar(n % 10 + '0');
}
void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
void    ft_conv(int nbr, int index, char *base)
{
    int i;

    if(!nbr)
        return;
    i = nbr % index;
    ft_conv(nbr / index, index , base);
    
    ft_putchar(base[i]);

}
int ft_check_base(char *base)
{
    int i;
    int is;

    i = 0;
    if(!base)
        return (0);
    while(base[i])
    {
        is = i + 1;
        if(base[i] == '-' || base[i] == '+')
            return (0);
        if(base[i] < 32 ||base[i] > 126)
            return (0);
        while(base[is])
            if(base[i] == base[is++])
                return (0);
        i++;
    }
    return(1);
}


void ft_putnbr_base(int nb, char *base)
{
    int index;
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    index = ft_strlen(base);
    if(ft_check_base(base))
    {
        if(index == 16 && nb < 16)
        {
            ft_putstr("\\0");
        }
        ft_conv(nb, index, base);
    }
}

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    if(*s1 - *s2 == 0)
        return (0);
    return(*s1 - *s2 > 0 ? 1 : -1);
}
char *ft_strcat(char *dest, char *src)
{
    int i;
    int k;

    i = -1;
    k = 0;
    while(dest[++i]);
    while(src[k])
        dest[i++] = src[k++];
    dest[i] = 0;
    return dest;
}

char *ft_strncpy(char *dest, const char *src, int n)
{
    int i;

    i = 0;
    while(i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
        dest[i] = '\0';
    return (dest);
}

int  ft_is_number(char c, char *base)
{
    int i;

    i = 0;
    while(base[i])
    {
        if(base[i++] == c)
            return(1);
    }
    return(0);

}

int ft_check_nbr(char str, char *base)
{
    int i;

    i = 0;
    while(base[i])
    {
        if(base[i] == str)
            return(i);
        i++;
    }
    return(0);
}

int ft_atoi_base(char *str, char *base)
{
    int nbr;
    int sign;
    int i;

    nbr = 0;
    i = 0;
    while(str[i]  <= ' ')
        i++;
    sign = (str[i] == '-')? -1 : 1;
    (str[i] == '+' ||str[i] == '-') ? i++ : 0;
       
    while(str[i] && ft_is_number(str[i], base) && ft_check_base(base))
    {  
        nbr = nbr * ft_strlen(base) + ft_check_nbr(str[i], base);
        i++;
    }
        return(nbr * sign );
}


char *ft_strncat(char *dest, char *src, int nb)
{
    int i;
    int k;

    i = -1;
    k = 0;
    while(dest[++i]);
    while(src[k] && k < nb)
    {
        dest[i++] = src[k++];
    }
    dest[i] = 0;
    return dest;

}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int  i;

    i = 0;
    while(*s1 && *s2 && *s1 == *s2 &&i < n)
    {
        s1++;
        s2++;
        i++;
    }
    if(i == n)
        return (0);
    return(s1[i] - s2[i]);
}



int ft_count_char(char *str)
{
    int char_nbr;
    int i;

    i = 0;
    char_nbr = 0;
    while(str[i++] > 32)
        char_nbr++;
    return(char_nbr); 
}

int ft_count_word(char *str)
{
    int i;
    int word;

    i = 0;
    word = 0;
    while(str[i])
    {
        if(str[i] > 32 && str[i + 1] <= 32)
            word++;
        i++;
    }
    return(word); 
}

char **ft_split_whitespaces(char *str)
{
    char **tab;
    int word;
    int i;
    int l;
    int size;

    i = 0;
    l = 0;
    word = ft_count_word(str);
    if(!(tab = malloc(sizeof(tab) * (word + 1))))
        return(NULL);
    while(i < word)
    {
        while(str[l] <= 32)
            l++;
        size = ft_count_char((str + l));
        if(!(tab[i] = malloc(sizeof(tab[i]) * (size + 1))))
            return(NULL);
        ft_strncpy(tab[i++], str + l, size);
        l += size;
    }
    tab[i] = 0;
    return(tab);
}

char *ft_strdup(char *src)
{
    char *s;
    int i;
    if(!(s = malloc(sizeof(src) * ft_strlen(src) + 1)))
        return (0);
    while(src[i])
    {
        s[i] = src[i];
        i++;
    }
    s[i] = 0;
    return(s);
}


void ft_print_words_tables(char **tab)
{
    int i;

    i = 0;
    while(tab[i])
    {
        ft_putstr(tab[i++]);
        ft_putstr("\n");
    }
}

void ft_add(int a, int b)
{
    ft_putnbr(a + b);
    ft_putstr("\n");
}

void ft_sub(int a, int b)
{
    ft_putnbr(a - b);
    ft_putstr("\n");
}

void ft_mul(int a, int b)
{
    ft_putnbr(a * b);
    ft_putstr("\n");
}

void ft_div(int a, int b)
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

void ft_mod(int a, int b)
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
void    ft_usage(int a,int b)
{
    ft_putstr("Error : only [ - +  * / %] only are accepted.\n");
}
