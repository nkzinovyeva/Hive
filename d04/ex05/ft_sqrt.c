/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:28:12 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/13 21:51:16 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0)
	{
		while (i * 1 <= nb)
		{
			if (i * i == nb)
				return (i);
			else if (i >= 46341)
				return (0);
			i++;
		}
	}
	return (0);
}