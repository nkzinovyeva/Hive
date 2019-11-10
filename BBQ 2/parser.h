/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:32:04 by agloba            #+#    #+#             */
/*   Updated: 2019/07/29 17:33:20 by agloba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "bsq.h"

t_map			parse_map(int fd);

typedef struct	s_parse_matrix_state
{
	t_coord		pos;
	char		val;
	t_point		*last_point;
}				t_parse_matrix_state;

typedef enum	e_parse_status
{
	OK,
	FAILURE,
	END_OF_LINE,
	END_OF_FILE
}				t_parse_status;

#endif
