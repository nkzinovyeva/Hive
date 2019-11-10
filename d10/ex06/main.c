/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:22:20 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/23 14:06:03 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/ft.h"

void	do_op(int argc, char **argv)
{
	int res;

	if (argc == 4)
	{
	res = ft_atoi(argv[1]);
		if (*argv[2] == '-')
			ft_putnbr(res -= ft_atoi(argv[3]));
		else if (*argv[2] == '+')
			ft_putnbr(res += ft_atoi(argv[3]));
		else if (*argv[2] == '/')
			ft_putnbr(res /= ft_atoi(argv[3]));
		else if (*argv[2] == '*')
			ft_putnbr(res *= ft_atoi(argv[3]));
		else if (*argv[2] == '%')
			ft_putnbr(res %= ft_atoi(argv[3]));
		else
			write (1, "0", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if ((*argv[3] == '0') && (*argv[2] == '/'))
			write (1, "Stop : division by zero\n", 24);
		else if ((*argv[2] == '%') && *argv[3] == '0')
			write (1, "Stop : modulo by zero\n", 22);
		else
			do_op(argc, argv);
	}
	return (0);
}
