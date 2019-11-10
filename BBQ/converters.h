/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converters.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:13:48 by agloba            #+#    #+#             */
/*   Updated: 2019/07/29 17:33:46 by agloba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTERS_H
# define CONVERTERS_H

# include "bsq.h"

typedef enum	e_point_state
{
	EMPTY,
	OBSTACLE
}				t_point_state;

t_point_state	char_to_point_state(t_map *map, char x);
char			point_state_to_char(t_map *map, t_point_state x);
t_coord			pos_to_coord(int width, int i);
t_point_state	get_point_state(t_map *map, t_coord coord);

#endif
