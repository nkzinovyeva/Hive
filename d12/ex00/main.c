/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:53:05 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/25 10:24:50 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int	read_file(char *name) 
{
	int fd;
	int size;
	char buf[BUF_SIZE + 1];

	fd = open(name, O_RDONLY);
	while ((size = read(fd, buf, BUF_SIZE)))
	{
		
		write (1, &buf, size);
		buf[size] = '\0';
		ft_putnbr(size);
	}
	return (0);
}

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		read_file(argv[1]);
//		close();
	}
	else if (argc < 2)
		write (1, "File name missing.\n", 19);
	else
		write (1, "Too many arguments.\n", 20);
	return (0);
}
