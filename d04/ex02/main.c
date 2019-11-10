/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:03:01 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/14 12:26:05 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	
	res = 1;
	while (power !=  0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int	main()
{
	printf("%d", ft_iterative_power(0, 3));
			return (0);
}
