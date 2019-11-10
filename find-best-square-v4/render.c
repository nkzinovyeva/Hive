#include <unistd.h>
#include "render.h"
#include "converters.h"
#include "my_stdlib.h"

/**
 * Renders a map on the screen, including drawn square in it.
 */
void	print_map(t_map *map, t_square square)
{
	int i;
	t_point *point;
	t_coord coord;

	i = 0;
	point = map->matrix;
	while (point != NULL)
	{
		coord = pos_to_coord(map->size.width, i);
		if (
			coord.x >= square.pos.x &&
			coord.y >= square.pos.y &&
			coord.x < square.pos.x + square.size &&
			coord.y < square.pos.y + square.size
		)
			put_char_fd(1, map->full);
		else
			put_char_fd(1, point_state_to_char(map, point->val));
		if ((i + 1) % map->size.width == 0)
			put_char_fd(1, '\n');
		point = point->next;
		i = i + 1;
	}
}
