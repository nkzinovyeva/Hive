#include "bsq.h"
#include "converters.h"

/**
 * Converts "char" to enum state (by looking at parsed from a map file chars
 * whether it's equals to "char" of empty point or a "char" of an obstacle).
 *
 * "-1" means something went wrong (unexpected/undefined behavior).
 */
t_point_state	char_to_point_state(t_map *map, char x)
{
	if (x == map->empty)
		return (EMPTY);
	else if (x == map->obstacle)
		return (OBSTACLE);
	else
		return (-1);
}

/**
 * Just converters enum state to a "char" specified for that state in parsed
 * map (to a "char" specified in map file we have read and parsed before).
 *
 * '\0' means something went wrong (unexpected/undefined behavior).
 */
char	point_state_to_char(t_map *map, t_point_state x)
{
	if (x == EMPTY)
		return (map->empty);
	else if (x == OBSTACLE)
		return (map->obstacle);
	else
		return ('\0');
}

/**
 * Converts one-dimentional coordinate to two-dimentional coordinate.
 */
t_coord	pos_to_coord(int width, int i)
{
	t_coord result;
	result.y = i / width;
	result.x = i - (result.y * width);
	return (result);
}

/**
 * Returns a state of point by provided coordinate
 * (whether it's either an empty point or an obstacle).
 */
t_point_state	get_point_state(t_map *map, t_coord coord)
{
	int i;
	t_point *point;

	i = 0;
	point = map->matrix;
	while (i < coord.x + (coord.y * map->size.width))
	{
		point = point->next;
		i = i + 1;
	}
	return (point->val);
}
