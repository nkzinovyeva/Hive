#include <unistd.h>
#include <fcntl.h>
#include "bsq.h"
#include "my_stdlib.h"
#include "render.h"
#include "parser.h"
#include "solver.h"

int		main(int argc, char **argv)
{
	int fd;
	t_map parsed_map;
	t_square square;

	if (argc != 2)
	{
		put_string_fd(2, "Unexpected arguments!");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	parsed_map = parse_map(fd);
	close(fd);
	if (parsed_map.matrix == NULL)
	{
		put_string_fd(2, "Failed to parse map from file: \"");
		put_string_fd(2, argv[1]);
		put_string_fd(2, "\"!\n");
		return (1);
	}
	square = find_biggest_square(&parsed_map);
	print_map(&parsed_map, square);
	return (0);
}
