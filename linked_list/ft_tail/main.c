#include "./includes/ft.h"
#include "./includes/ft_opp.h"
#include <errno.h>
#include <fcntl.h>
#define BUF_SIZE 13

void	ft_tail(int argc, char **argv)
{
	char	buf;
	int		fd;
	int		i;


	i = 3;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			ft_putstr("==> ");
			ft_putstr(argv[i]);
			ft_putstr(" <==\n");
			lseek(fd, -1 * ft_atoi(argv[2]), SEEK_END);
			while (read(fd, &buf, 1) != 0)
				write(1, &buf, 1);
			ft_putstr("\n");
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": No such file or directory\n");
		}
		close(fd);
		i++;
	}
}

void	disp_stdin(void)
{
	char	buffer;

	while (read(0, &buffer, 1) != 0);
//		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	if (argc < 3 && (argv[1][0] == '-'))
		disp_stdin();
	else if(argv[1][0] =='-' && argv[1][1] == 'c')
		ft_tail(argc, argv);
	return (0);
}
