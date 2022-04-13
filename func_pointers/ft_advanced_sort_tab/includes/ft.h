#ifndef __FT_H__
#define __FT_H__
#include<unistd.h>
#include<stdlib.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_strlen(char *str);
void    ft_putnbr(int n);
void    ft_swap(int *a, int *b);
void    ft_conv(int nbr, int index, char *base);
int     ft_check_base(char *base);
void    ft_putnbr_base(int nb, char *base);
int     ft_strcmp(char *s1, char *s2);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncpy(char *dest, const char *src, int n);
int     ft_is_number(char c, char *base);
int     ft_check_nbr(char str, char *base);
int     ft_atoi_base(char *str, char *base);
char    *ft_strncat(char *dest, char *src, int nb);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
void    ft_foreach(int  *tab, int length, void (*f)(int));
int     *ft_map(int *tab, int length, int(*f)(int));
int     ft_any(char **tab, int(*f)(char*));
int     ft_count_if(char **tab, int(*f)(char*));
int     ft_is_sort(int *tab, int length, int(*f)(int, int));
int     ft_atoi(char *str);
void    ft_sort_wordtab(char **tab);  
char    **ft_split_whitespaces(char *str);
void    ft_print_words_tables(char **tab);
void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));





#endif
