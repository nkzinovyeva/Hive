/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 18:21:16 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/17 11:36:11 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	 main(void)
{
	char str3[] = "AsdqwertY";
	char str4[] = "qwer";
	strcpy(str3, str4);
	printf("%s %s\n", str3, str4);
	ft_strcpy(str3, str4);
	printf("%s %s\n", str3, str4);
}
