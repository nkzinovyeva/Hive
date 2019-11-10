/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 10:08:58 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/14 12:19:41 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
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

int main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return(0);
}
