/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:38:50 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/13 18:17:26 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recurcive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recurcive_factorial(nb - 1));
}
