/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_stdlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:37:30 by agloba            #+#    #+#             */
/*   Updated: 2019/07/29 15:42:36 by agloba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "my_stdlib.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

void	put_string_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

void	put_char_fd(int fd, char c)
{
	char x[1];

	x[0] = c;
	write(fd, x, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int is_negative;
	int result;

	i = 0;
	result = 0;
	is_negative = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i = i + 1;
	if (str[i] == '+')
		i = i + 1;
	if (str[i] == '-')
	{
		is_negative = -1;
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		result = result * 10 + (str[i] - 48);
		i = i + 1;
	}
	return (result * is_negative);
}
