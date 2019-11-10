/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_top.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:25 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 16:12:33 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_top00(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'o';
	else if (len > 1)
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

char	*ft_top01(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = '/';
	else if (len > 1)
	{
		mine[0] = '/';
		while (i <= len - 2)
		{
			mine[i] = '*';
			i++;
		}
		mine[len - 1] = '\\';
		mine[len] = '\0';
	}
	return (mine);
}

char	*ft_top02(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'A';
	else if (len > 1)
	{
		mine[0] = 'A';
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

char	*ft_top03(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'A';
	else if (len > 1)
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

char	*ft_top04(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'A';
	else if (len > 1)
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
