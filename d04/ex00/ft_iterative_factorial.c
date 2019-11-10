/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:08:58 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/13 13:43:09 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	if (nb < 0 || nb > 12)
		return (0);
	fact = 1;
	while (nb != 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
