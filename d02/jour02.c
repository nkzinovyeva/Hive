/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 14:23:40 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/10 19:45:30 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int 	ft_nputchar(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
		{	
			ft_putchar(c);
			i = i + 1;
		}
	return(0);
}

int 	main()
{
	ft_nputchar('@', 42); 
	ft_putchar('\n'); 
	return (0);
}
