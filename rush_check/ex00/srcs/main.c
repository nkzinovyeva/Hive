/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 22:10:30 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

int	main(int argc, char **argv)
{
	void		*buf;
	t_coords	deduce;
	t_coords	*pass;

	deduce.x = 0;
	deduce.y = 0;
	pass = &deduce;
	if (!find_matches(ft_read(pass), pass))
		ft_putstr("aucune\n");
	return (0);
}
