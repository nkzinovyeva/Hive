/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 19:41:48 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/17 21:20:19 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char *copy;
	int leng;
	int i;

	leng = 0;
	i = 0;
	while(src[leng] != '\0')
	leng++;
	copy = (char*) malloc(sizeof(*copy) * leng + 1);
	while (i < leng)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int		main(void)
{
	char *str = "test";
	char *copy1;
	char *copy2;
	copy1 = ft_strdup(str);
	printf("this is the %s \n", copy1);
	copy2 = strdup(str);
	printf("and original is aslo the %s \n", copy2);
	return (0);
}
