/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 18:58:54 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/12 21:47:14 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include "ft_div_mod.c"

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int c = 10;
	int d = 4;

	int e;
	int f;

	ft_div_mod(c, d, &e, &f);
	printf("%d %d", e, f);
	return (0);
}

