/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:48:43 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/17 11:44:53 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	 main()
{
	char str3[] = "ytrewQ";
	char str4[] = "wadsadasdasd";
	strncpy(str3, str4, 5);
	printf("%s %s\n", str3, str4);
	ft_strncpy(str3, str4, 5);
	printf("%s %s\n", str3, str4);
	return (0);
}

