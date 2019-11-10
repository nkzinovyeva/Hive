/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 13:14:34 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/28 14:04:34 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"
#include "ft_read.h"

void	testprint(char *masterstr, int x)
{
	int i;

	i = 0;
	ft_putchar('\n');
	while (*(masterstr + i))
	{
		ft_putchar(*(masterstr + i));
		++i;
		if (i % x == 0)
			ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int			length = x;
	char		*first_line0;
	t_rush_info	*myinfo1;
	
	myinfo1 = ft_rush_collect_test01(length, y);
	printf("%s %s\n", myinfo1->name, myinfo1->print);
	testprint(myinfo1->print, x);
	free (myinfo1->print);
	free (myinfo1);

	ft_read();
	return (0);
}

