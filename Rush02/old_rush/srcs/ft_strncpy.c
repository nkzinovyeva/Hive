/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:25:45 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/16 19:19:53 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	src_length;
	unsigned int	i;

	src_length = 0;
	while (src[src_length] != 0)
		++src_length;
	if (src_length < n)
	{
		i = 0;
		while (src_length + i < n)
		{
			dest[src_length + i] = 0;
			++i;
		}
	}
	i = 0;
	while (i < src_length && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return (&dest[i]);
}
