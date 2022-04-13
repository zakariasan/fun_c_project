#include "./includes/ft.h"

int main(int ac, char **av)
{
    char **tab;
    tab = ft_split_whitespaces("hello world im from the futur");
    ft_print_words_tables(tab);
    ft_putstr("--------Sort table now -------------\n");
    ft_sort_wordtab(tab);
    ft_print_words_tables(tab);
    return (0);
}
