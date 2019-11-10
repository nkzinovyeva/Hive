/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:21:04 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/16 20:02:01 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	while (src[length] != 0)
		++length;
	dest[length] = 0;
	i = 0;
	while (i < length)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
