/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 22:15:04 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 22:28:41 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

void	print_coords(t_coords *xy)
{
	ft_putchar('[');
	ft_putnbr(coords->x);
	ft_putstr("] [");
	ft_putnbr(coords->y);
	ft_putchar(']');
}

void	print_tag(t_coords *xy, t_rush_info *rush)
{
	ft_putchar(rush->print);
	ft_putchar(' ');
	print_coords();
	ft_putchar('\n');
}
