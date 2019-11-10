/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:25 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 18:34:07 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_bot00(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len > 0)
	{
		mine[0] = 'o';
		while (i <= len - 2)
		{
			mine[i] = '-';
			i++;
		}
		mine[len - 1] = 'o';
		mine[len] = '\0';
	}
	return (mine);
}

char	*ft_bot01(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = '\\';
	else if (len > 1)
	{
		mine[0] = '\\';
		while (i <= len - 2)
		{
			mine[i] = '*';
			i++;
		}
			mine[len - 1] = '/';
		mine[len] = '\0';
	}
	return (mine);
}

char	*ft_bot02(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len > 0)
	{
		mine[0] = 'C';
		while (i <= len - 2)
		{
			mine[i] = 'B';
			i++;
		}
		mine[len - 1] = 'C';
		mine[len] = '\0';
	}
	return (mine);
}

char	*ft_bot03(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'A';
	if (len > 1)
	{
		mine[0] = 'A';
		while (i <= len - 2)
		{
			mine[i] = 'B';
			i++;
		}
		mine[len - 1] = 'C';
		mine[len] = '\0';
	}
	return (mine);
}

char	*ft_bot04(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'C';
	if (len > 1)
	{
		mine[0] = 'C';
		while (i <= len - 2)
		{
			mine[i] = 'B';
			i++;
		}
		mine[len - 1] = 'A';
		mine[len] = '\0';
	}
	return (mine);
}
