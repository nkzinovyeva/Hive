/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:51:43 by agloba            #+#    #+#             */
/*   Updated: 2019/07/29 18:00:06 by agloba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "my_stdlib.h"
#include "converters.h"
#include "parser.h"
#include "bsq.h"

/*
** It reads single "char" of matrix point from map file and checks whether it's
** end of line (in that case it shifts row coordinate).
**
** At the beginning we don't know "width" of a map yet, and when we meet first
** line-break we save current count of columns as a map width.
*/

t_parse_status	parse_matrix_char(int fd, t_map *map, t_parse_matrix_state *s)
{
	ssize_t read_result;

	read_result = read(fd, &s->val, sizeof(s->val));
	if (read_result != sizeof(s->val))
		return (FAILURE);
	if (map->size.width > 0 && s->pos.x == map->size.width)
	{
		if (s->val == '\n')
		{
			if (s->pos.y == map->size.height - 1)
			{
				read_result = read(fd, &s->val, sizeof(s->val));
				if (read_result != 0)
					return (FAILURE);
				return (END_OF_FILE);
			}
			s->pos.x = 0;
			s->pos.y = s->pos.y + 1;
			return (END_OF_LINE);
		}
		else
			return (FAILURE);
	}
	else if (map->size.width == 0 && s->val == '\n')
	{
		map->size.width = s->pos.x;
		s->pos.x = 0;
		s->pos.y = s->pos.y + 1;
		return (END_OF_LINE);
	}
	return (OK);
}

/*
** It checks whether received point "char" is a valid "char"
** (either is a pre-defined in the beginning of map file "empty" char or
** "obstacle" char). And it allocates memory for new point in linked list and
** stores state of parsed point in that memory.
**
** Result values (like in "main" function):
**   0 - OK
**   1 - FAIL
*/

int		save_matrix_point(t_map *map, t_parse_matrix_state *s)
{
	if (s->val != map->empty && s->val != map->obstacle)
		return (1);
	if (s->last_point == NULL)
	{
		s->last_point = malloc(sizeof(t_point));
		s->last_point->val = char_to_point_state(map, s->val);
		s->last_point->next = NULL;
	}
	else
	{
		s->last_point->next = malloc(sizeof(t_point));
		s->last_point = s->last_point->next;
		s->last_point->val = char_to_point_state(map, s->val);
		s->last_point->next = NULL;
	}
	s->pos.x = s->pos.x + 1;
	return (0);
}

/*
** Parses matrix of map from file into one-dimentional linked-list.
**
** If it exits (does "return;") earlier than saves the result into "map->matrix"
** it means it's failed to parse, something went wrong.
*/

void	parse_matrix(int fd, t_map *map)
{
	t_point					*result;
	t_parse_matrix_state	state;
	t_parse_status			parse_status;

	result = NULL;
	state.last_point = NULL;
	state.pos.x = 0;
	state.pos.y = 0;
	while (1)
	{
		parse_status = parse_matrix_char(fd, map, &state);
		if (parse_status == OK)
		{
			if (save_matrix_point(map, &state) != 0)
			{
				return ;
			}
			if (result == NULL)
			{
				result = state.last_point;
			}
		}
		else if (parse_status == END_OF_LINE)
		{
		}
		else if (parse_status == END_OF_FILE)
		{
			break ;
		}
		else
		{
			return ;
		}
	}
	map->matrix = result;
}

/*
** "empty_symbol" means first symbols after map size number which represents
** an empty cell on a matrix (not an obstacle).
**
** Default value '\0' stands for failure value, when something goes wrong.
*/

char	parse_map_size(int fd, t_map *map)
{
	int		i;
	char	lines_count[5];
	ssize_t	read_result;
	char	empty_symbol;

	i = 0;
	empty_symbol = '\0';
	while (i < (int)sizeof(lines_count) - 1)
	{
		read_result = read(fd, &lines_count[i], sizeof(lines_count[i]));
		if (read_result != 1)
			return (empty_symbol);
		if (lines_count[i] < '0' || lines_count[i] > '9')
		{
			if (i == 0)
				return (empty_symbol);
			empty_symbol = lines_count[i];
			lines_count[i] = '\0';
			map->size.height = ft_atoi(lines_count);
			break ;
		}
		i = i + 1;
	}
	return (empty_symbol);
}

/*
** Takes descriptor of opened file of a map and reads and parses its content
** into map structure. Detects what symbols are used to identify empty spot,
** obstacle or fill for a square, and a size of a map. And then parsing matrix
** of that map char by char until the end of file.
*/

t_map	parse_map(int fd)
{
	t_map		result;
	ssize_t		read_result;
	char		symbols[4];

	result.size.width = 0;
	result.size.height = 0;
	result.matrix = NULL;
	symbols[0] = parse_map_size(fd, &result);
	if (symbols[0] == '\0')
		return (result);
	read_result = read(fd, &symbols[1], sizeof(symbols) - 1);
	if (read_result != sizeof(symbols) - 1)
		return (result);
	if (
		symbols[0] < 32 || symbols[0] > 126 ||
		symbols[1] < 32 || symbols[1] > 126 ||
		symbols[2] < 32 || symbols[2] > 126 ||
		symbols[3] != '\n')
		return (result);
	result.empty = symbols[0];
	result.obstacle = symbols[1];
	result.full = symbols[2];
	parse_matrix(fd, &result);
	return (result);
}
