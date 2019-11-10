/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 16:24:44 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/10 21:10:53 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void 	ft_is_negative(int n)
{

	if  (n >= 0 )
	{
		ft_putchar('P');
	}
	else 
	{
		ft_putchar('N');
	}

	ft_putchar('\n');
}

int 	main(void)
{

		ft_is_negative(-6);
		return (0);
}
