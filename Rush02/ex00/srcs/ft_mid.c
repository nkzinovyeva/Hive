/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mid.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:25 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/28 17:43:55 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_mid00(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 2) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = '|';
	else if (len > 1)
	{
		mine[0] = '|';
		while (i <= len - 2)
		{
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = '|';
	}
	mine[len] = '\n';
	mine[len + 1] = '\0';
	return (mine);
}

char	*ft_mid01(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 2) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = '*';
	else if (len > 1)
	{
		mine[0] = '*';
		while (i <= len - 2)
		{
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = '*';
	}
	mine[len] = '\n';
	mine[len + 1] = '\0';
	return (mine);
}

char	*ft_mid02(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 2) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'B';
	else if (len > 1)
	{
		mine[0] = 'B';
		while (i <= len - 2)
		{
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = 'B';
	}
	mine[len] = '\n';
	mine[len + 1] = '\0';
	return (mine);
}

char	*ft_mid03(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 2) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'B';
	else if (len > 1)
	{
		mine[0] = 'B';
		while (i <= len - 2)
		{
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = 'B';
	}
	mine[len] = '\n';
	mine[len + 1] = '\0';
	return (mine);
}

char	*ft_mid04(int len)
{
	char	*mine;
	int		i;

	mine = (char *)malloc((len + 2) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'B';
	else if (len > 1)
	{
		mine[0] = 'B';
		while (i <= len - 2)
		{
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = 'B';
	}
	mine[len] = '\n';
	mine[len + 1] = '\0';
	return (mine);
}
