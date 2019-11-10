/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:10:03 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 22:40:30 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_H
# define FT_READ_H

# include <unistd.h> // read, close

# include <sys/uio.h> // write?
# include <sys/types.h> // open
# include <sys/stat.h>
# include <fcntl.h>

# include <string.h> // TODO remove
# include "ft_rush.h"

# define BUFFER_SIZE 1001

typedef struct	s_coords
{
	int x;
	int y;
}				t_coords;

void			ft_putchar(char c);
void			ft_putstr(char *str);
char			*ft_strncpy(char *str1, const char *str2, int n);
void			*ft_read(t_coords *c);
int				find_matches(void *buf, t_coords *c);
void			print_tag(t_coords *xy, t_rush_info *rush, int nb);
t_rush_info		*ft_rush_collector00(int x, int y);
t_rush_info		*ft_rush_collector01(int x, int y);
t_rush_info		*ft_rush_collector02(int x, int y);
t_rush_info		*ft_rush_collector03(int x, int y);
t_rush_info		*ft_rush_collector04(int x, int y);

#endif
