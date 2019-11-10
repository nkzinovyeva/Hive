/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:16:09 by agloba            #+#    #+#             */
/*   Updated: 2019/07/29 16:51:45 by agloba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct				s_linked_list
{
	int						val;
	struct s_linked_list	*next;
}							t_point;

typedef struct				s_coord
{
	int						x;
	int						y;
}							t_coord;

typedef struct				s_size
{
	int						width;
	int						height;
}							t_size;

typedef struct				s_map
{
	t_size					size;
	char					empty;
	char					obstacle;
	char					full;
	t_point					*matrix;
}							t_map;

typedef struct				s_square
{
	t_coord					pos;
	int						size;
}							t_square;

#endif
