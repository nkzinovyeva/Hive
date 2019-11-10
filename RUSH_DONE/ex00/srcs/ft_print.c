/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 22:15:04 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 22:41:15 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

void	print_coords(t_coords *xy)
{
	ft_putchar('[');
	ft_putnbr(xy->x);
	ft_putstr("] [");
	ft_putnbr(xy->y);
	ft_putchar(']');
}

void	print_tag(t_coords *xy, t_rush_info *rush, int nb)
{
	int i;

	i = 0;
	while (i < nb - 1)
	{
		ft_putstr(rush->name);
		ft_putchar(' ');
		print_coords(xy);
		ft_putstr(" || ");
		++i;
	}
	ft_putstr(rush->name);
	ft_putchar(' ');
	print_coords(xy);
}
