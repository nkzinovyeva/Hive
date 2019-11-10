/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:55:01 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/19 10:12:44 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)// count lenght of words
{
	int i;
	int leng;

	i = 0;
	leng = 0;
	while (str[i] != '\0')
	{
		i++;
		leng++;
	}
	return (leng);
}

char	*ft_strcat(char *dest, char *src)// glue words together
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)// 
{
	char	*str;//for str
	int		size;// for full size of memory
	int		i;//counter for argc
	int		j;//counter 
	
	i = 1;
	while (*argv[i] < argc)//until less than total amount of param
	{
		size = size + ft_strlen(argv[i]);
		i++;
	}
	str = (char*)malloc(sizeof(*str) * (size + 1));//
	j = 0;
	while (j < argc - 1)//
	{
		str = ft_strcat(str, argv[j + 1]);
		if (j != argc - 2)//until between strings; second last 
			str = ft_strcat(str, "\n");
		j++;
	}
	return (str);
}
