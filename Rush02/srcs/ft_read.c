/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 22:54:34 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_read.h"

int	ft_read(void)
{
	int			fd;
	int			reading;
	void		*buf;
	char		first_line[1 + BUFFER_SIZE];
	int			letters;
	t_rush_info	*rush00;

	buf = (void *)malloc((1 + BUFFER_SIZE) * sizeof(char));
	reading = 1;
	letters = 0;
	while (reading)
	{
		if (reading != '\n')
		{
			reading = read(0, buf, 1);
			write(1, buf, 1);
			first_line[letters] = ((char *)buf)[letters];
			++letters;
		}
		rush00 = ft_rush_collector00(letters, 1);
		strncpy(, first_line, letters);
//		if (!strcmp(strncpy(NULL, first_line, letters), strncpy(NULL,
//					rush00->print, letters)))
//			ft_putstr("it could be top00");
//		else
//			ft_putstr("No match found");
	}

// file open
// read a char
// while char != '\0'
// 		FIRST LINE
// 		while char != '\n'
// 			construct string
// 			measure x
// 		compare string to known fn(x)s
// 		narrow down
// 		if (no matches left)
// 			end

//		SECOND LINE
//		while char != '\n'
//			construct string
//			measure x_2
//		if (x_2 != x_1)
/// 		compare string to known fn(x)s with y(1) || y(2) || y(3)
// 		narrow down
// 		if (no matches left)
// 			end

//		THIRD LINE
//		while char != '\n'
//			construct string
//			measure x_3
//		if (x_3 != x_1)
/// 		compare string to known fn(x)s with y(1) || y(3) || y(4)
// 		narrow down
// 		if (no matches left)
// 			end

	return (0);
}
