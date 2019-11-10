/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 23:39:04 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

int	main(int argc, char **argv)
{
	void		*buf;
	t_coords	deduce;
	t_coords	*pass;
	int			*found;
	int			i;

	found = (int *)malloc(6*sizeof(int));
	deduce.x = 0;
	deduce.y = 0;
	pass = &deduce;
	found = find_matches(ft_read(pass), pass);
	found[0] = 0;
	i = 1;
	while (i++ < 6)
		found[0] += found[i];
	if (!found[0])
		ft_putstr("aucune\n");
	return (0);
}
