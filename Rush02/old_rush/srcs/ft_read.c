/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 13:25:06 by mnenonen         ###   ########.fr       */
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
	int			x;
	int			y;
	t_rush_info	*rush00;

	x = 3;
	y = 4;
	buf = (void *)malloc((1 + BUFFER_SIZE) * sizeof(char));
	reading = 1;
	letters = 0;
	if (reading)
	{
		if (reading != '\n')
		{
			reading = read(0, buf, 100);
			write(1, buf, 100);
//			first_line[letters] = ((char *)buf)[letters];
			++letters;
		}
		rush00 = ft_rush_collector00(x, y);
		printf("%s with x: %d y: %d:: %s", rush00->name, x, y, rush00->print);
		if (!strcmp(buf, rush00->print))
			printf("They look the same! It could be %s", rush00->name);
		else
			printf("They look different.\n%svs\n%s", buf, rush00->print);
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
