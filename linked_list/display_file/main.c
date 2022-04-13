#include "./includes/ft.h"
#include "./includes/ft_opp.h"

#define BUF_SIZE 1337

int main(int ac, char **av)
{

    int     fd;
    char    buf[BUF_SIZE + 1];
    int     ret;

    if(ac == 1)
        ft_putstr("File name missing.\n");
    else if(ac > 2)
        ft_putstr("Too many arguments.\n");
    else
    {
        if(!(fd = open(av[1], O_RDONLY)))
            return (1);
        while((ret = read(fd, buf, BUF_SIZE)))
        {
            buf[ret] = 0;
            ft_putstr(buf);
        }
        if(!(close(fd)))
            return(1);
    }
    return (0);
}
