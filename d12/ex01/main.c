/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:53:05 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/25 16:43:09 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 30

void	ft_read_file(int fd)
{
	int		size;
	char	buf[BUF_SIZE + 1];

	while ((size = read(fd, buf, BUF_SIZE)))
	{
		write(1, &buf, size);
	}
}

int		main(int argc, char **argv)
{
	int i;
	int fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
		{
			write(1, "No such file or directory\n", 26);
			return (-1);
		}
		ft_read_file(fd);
		close(fd);
		i++;
	}
	if (argc < 2)
		write(1, "File name missing.\n", 19);
	return (0);
}
