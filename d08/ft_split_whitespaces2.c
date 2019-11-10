/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:47:53 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/19 16:35:12 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_separ(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == '\0')
	{
		return (1);
	}
	else
		return (0);
}

int		ft_len(int index, char *str)
{
	int i;

	i = index;
	while (!(ft_separ(str[index])))
	{
		index++;
	}
	return (index - i);
}

int		ft_countword(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_separ(str[i]))
			count++;
		i++;
	}
	return (count + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char 	**tab;
	int 	i;
	int 	j;
	int		k;

	i = 0;
	j = 0;
	tab = malloc(ft_countword(str));
	while (str[j])
	{
		k = 1;
		while (ft_separ(str[j]))
			j++;
		*(tab + i) = (char *)malloc(sizeof(char) * ((ft_len(j, str) + 1)));
		while (!(ft_separ(str[j])))
		{
			tab[i][k - 1] = str[j++];
			k++;
		}
		tab[i++][k - 1] = '\0';
	}
	tab[i] = 0;
	return (&tab[0]);
}

int   main(void)
{
	char** res;
	for (res = ft_split_whitespaces("qwwe qwer errt"); *res != 0; res++)
	{
		printf("%s ", *res);
	}
	return (0);
}
