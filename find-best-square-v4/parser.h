#include "bsq.h"

#ifndef PARSER_H
#define PARSER_H

t_map	parse_map(int fd);

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
