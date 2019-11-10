/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 13:22:31 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
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
/*
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int			length = x;
	char		*first_line0;
	t_rush_info	*myinfo0;
	t_rush_info	*myinfo1;
	t_rush_info	*myinfo2;
	t_rush_info	*myinfo3;
	t_rush_info	*myinfo4;

	myinfo0 = ft_rush_collector00(length, y);
	printf("%s %s\n", myinfo0->name, myinfo0->print);
	testprint(myinfo0->print, x);
	free (myinfo0->print);
	free (myinfo0);
	myinfo1 = ft_rush_collector01(length, y);
	printf("%s %s\n", myinfo1->name, myinfo1->print);
	testprint(myinfo1->print, x);
	free (myinfo1->print);
	free (myinfo1);
	myinfo2 = ft_rush_collector02(length, y);
	printf("%s %s\n", myinfo2->name, myinfo2->print);
	testprint(myinfo2->print, x);
	free (myinfo2->print);
	free (myinfo2);
	myinfo3 = ft_rush_collector03(length, y);
	printf("%s %s\n", myinfo3->name, myinfo3->print);
	testprint(myinfo3->print, x);
	free (myinfo3->print);
	free (myinfo3);
	myinfo4 = ft_rush_collector04(length, y);
	printf("%s %s\n", myinfo4->name, myinfo4->print);
	testprint(myinfo4->print, x);
	free (myinfo4->print);
	free (myinfo4);*/
	ft_read();
	return (0);
}
