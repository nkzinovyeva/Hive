/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skellman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:15:10 by skellman          #+#    #+#             */
/*   Updated: 2019/07/13 16:00:06 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush(int x, int y)
{
	int posx;
	int posy;

	posy = 1;
	while (posy <= y)
	{
		posx = 1;
		while (posx <= x)
		{
			if ((posx == 1 && posy == 1) || (posx == x && posy == y && posy != 1 && posx != 1))
				ft_putchar('A');
			else if ((posx == x && posy == 1) || (posy == y && posx == 1))
				ft_putchar('C');
			else if (posx == 1 || posx == x || posy == 1 || posy == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			posx++;
		}
		ft_putchar('\n');
		posy++;
	}
	return (0);
}
