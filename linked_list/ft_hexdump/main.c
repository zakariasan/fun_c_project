#include "./includes/ft.h"
#include "./includes/ft_opp.h"
#include <errno.h>
#include <fcntl.h>

void ft_print_ascii(char c)
{
	if(c >=32 && c<=126)
		write(1,&c,1);
	else
		write(1,".",1);
}
void ft_print_offset(int n, int i)
{
	char *base;

	base = "0123456789abcdef";
	if(n / 16 > 0)
		ft_print_offset(n/16, i+1);
	else if(i < 8)
		while(++i <= 8)
			write(1,"0",1);
	write(1, base + n % 16, 1);
}


void ft_print_hex(char c, int i, int size)
{
	char *base;

	base = "0123456789abcdef";
	if(i < size)
	{
		write(1, base + c/16 ,1);
		write(1, base +c%16, 1);
		write(1," ",1);
	}
	else
		write(1,"   ",3);
	if((i+1) % 8 == 0)
		write(1, " ",1);
}
void	ft_hexdump(char *str, int size)
{
	int i;
	int j;

	j = 0;
	while(str[j])
	{
		ft_print_offset(j,1);
		write(1, "  ",2);
		i = j - 1;
		while(++i < 16 + j)
			ft_print_hex(str[i], i, size);
		i  = j -1;
		write(1, "|",1);
		while(++i<16 +j && str[i])
			ft_print_ascii(str[i]);
		write(1, "|\n",2);
		j +=16;
	}
	ft_print_offset(j,1);
	write(1,"\n",1);
	free(str);
}

int		ft_file_size(char *file_name)
{
	char buf;
	int size;
	int fd;

	buf = 0;
	size = 0;
	fd = open(file_name, O_RDONLY);
	if(fd < 0)
		{
			write(2, "ft_hexdump : ", 12);
			while(*file_name)
				write(2, file_name++, 1);
			write(2, ": No such file or dir\n", 25);
		}
	else
		while(read(fd, &buf, 1) > 0)
			++size;
	close(fd);
	return (size);
}

char *ft_copy_input(char *file_name, int size)
{
	char buf;
	int i;
	char *str;
	int fd;
	
	buf = 0;
	i = 0;
	str = malloc(size + 1);
	fd = open(file_name,O_RDONLY);
	while(read(fd, &buf, 1) > 0)
		str[i++] = buf;
	str[i] = 0;
	close(fd);
	return str;
}
int		main(int argc, char **argv)
{
	char *str;
	int i;
	int size;

	i = 0;
	while(++i < argc)
	{
		if(!(*argv[i] == '-' && argv[i][1] == 'C'))
			{
				size = ft_file_size(argv[i]);
				str = ft_copy_input(argv[i], size);
				ft_hexdump(str, size);
			}
	}
	return (0);
}
