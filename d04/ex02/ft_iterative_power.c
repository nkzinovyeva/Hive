/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 19:03:01 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/13 19:56:15 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
