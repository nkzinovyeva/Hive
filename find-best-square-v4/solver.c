#include "solver.h"
#include "converters.h"

/**
 * It returns how many points can be placed in between current X-coordinate and
 * closest obstacle to the right or to an end of a row (in case there are no
 * obstacles before the end of a row).
 */
int		find_distance_to_next_obstacle(t_map *map, t_coord coord)
{
	int result;
	t_point_state point_state;
	t_coord cur;

	cur.x = coord.x;
	cur.y = coord.y;
	result = 0;
	point_state = get_point_state(map, cur);
	while (cur.x < map->size.width && point_state == EMPTY)
	{
		cur.x = cur.x + 1;
		point_state = get_point_state(map, cur);
		result = result + 1;
	}
	return (result);
}

/**
 * Returned values (like boolean):
 *   1 - if it's an edge or an obstacle by provided coordinate
 *   0 - if it's an available empty point to draw there a square
 */
int		faced_edge_or_obstacle(t_map *map, t_coord coord)
{
	if (
		coord.x >= map->size.width ||
		coord.y >= map->size.height ||
		get_point_state(map, coord) != EMPTY
	)
		return (1);
	else
		return (0);
}

/**
 * It tries to draw square with initial size
 * (if we fail we don't have to try to draw bigger square, it makes no sense).
 *
 * It returns 0 (zero) in case it failed
 * (faced an obstacle or an edge of matrix).
 *
 * "x" and "y" are relative to "init_coord" coordinates
 * (from 0 (zero) to size of an initial square).
 */
int		try_draw_init_square(t_map *map, t_coord init_coord, int init_size)
{
	int size;
	t_coord rel_coord;
	t_coord coord;

	rel_coord.x = 0;
	rel_coord.y = 0;
	size = init_size;
	while (rel_coord.y < init_size)
	{
		if (rel_coord.x == init_size)
		{
			rel_coord.x = 0;
			rel_coord.y = rel_coord.y + 1;
		}
		else
		{
			coord.x = init_coord.x + rel_coord.x;
			coord.y = init_coord.y + rel_coord.y;
			if (faced_edge_or_obstacle(map, coord))
				return (0);
		}
		rel_coord.x = rel_coord.x + 1;
	}
	return (size);
}

/**
 * Tries to expand square again and again by 1 size value,
 * checking only new added line at the bottom and one rightest column.
 *
 * It presumes that initial square is already checked
 * (that there's no obstacles there and it doesn't fall over the edge of a map).
 *
 * It returns initial size in case it's failed to expand
 * (faced an obstacle or the edge of a map).
 */
int		try_expand_square(t_map *map, t_coord init_c, int init_size, int limit)
{
	int size;
	t_coord rel_coord;
	t_coord coord;

	size = init_size + 1;
	rel_coord.x = 0;
	rel_coord.y = size - 1;
	while (1)
	{
		coord.x = init_c.x + rel_coord.x;
		coord.y = init_c.y + rel_coord.y;
		if (faced_edge_or_obstacle(map, coord))
		{
			size = size - 1;
			break;
		}
		else if (rel_coord.y > 0 && rel_coord.x == size - 1)
			rel_coord.y = rel_coord.y - 1;
		else if (rel_coord.y == 0)
		{
			if (size == limit)
				break;
			else
			{
				size = size + 1;
				rel_coord.x = 0;
				rel_coord.y = size - 1;
			}
		}
		else
			rel_coord.x = rel_coord.x + 1;
	}
	return (size);
}

/**
 * It returns 0 (zero) in case it's failed to draw a square with initial size
 * (it faced an obstacle or an edge of a map).
 */
int		try_draw_square(t_map *map, t_coord init_c, int init_size, int limit)
{
	int size;

	size = try_draw_init_square(map, init_c, init_size);
	if (size < init_size)
	{
		return (0);
	}
	else
	{
		size = try_expand_square(map, init_c, init_size, limit);
	}
	return (size);
}

/**
 * It tries at many points to fit a square as big as possible and returns first
 * found best (biggest) result.
 */
t_square	find_biggest_square(t_map *map)
{
	t_square best;
	t_coord coord;
	int i;
	int x_distance;
	int size;

	i = 0;
	coord = pos_to_coord(map->size.width, i);
	best.pos = coord;
	best.size = 0;
	while (map->size.height - coord.y > best.size)
	{
		x_distance = find_distance_to_next_obstacle(map, coord);
		if (x_distance <= best.size)
		{
			i = i + x_distance + 1;
			coord = pos_to_coord(map->size.width, i);
			continue;
		}
		size = try_draw_square(map, coord, best.size + 1, x_distance);
		if (size > best.size)
		{
			best.pos = coord;
			best.size = size;
		}
		i = i + 1;
		coord = pos_to_coord(map->size.width, i);
	}
	return (best);
}
