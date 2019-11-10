/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:12:11 by agloba            #+#    #+#             */
/*   Updated: 2019/07/29 18:00:08 by agloba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "bsq.h"
#include "my_stdlib.h"
#include "render.h"
#include "parser.h"
#include "solver.h"

int		main(int argc, char **argv)
{
	int			fd;
	int			i;
	t_map		parsed_map;
	t_square	square;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		parsed_map = parse_map(fd);
		close(fd);
		if (parsed_map.matrix == NULL)
		{
			put_string_fd(2, "Failed to parse map from file: \"");
			put_string_fd(2, argv[i]);
			put_string_fd(2, "\"!\n");
			return (1);
		}
		square = find_biggest_square(&parsed_map);
		print_map(&parsed_map, square);
		if (argc - i > 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
