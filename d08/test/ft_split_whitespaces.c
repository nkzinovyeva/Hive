/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:05:55 by agloba            #+#    #+#             */
/*   Updated: 2019/07/19 11:27:56 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	print_array_strings(char **v)
{
	int i;

	i = 0;
	if (!v)
		printf("NULL\n");
	else
	{
		while (v[i] != 0)
		{
			printf("%s", v[i]);
			i++;
		}
	}
	printf("\n");
}

int		count_words(char *str)
{
	int i;
	int j;
	int word_size;
	char *word;

	i = 0;
	j = 0;
	word_size = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') //if separator
		i++;
	while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n') // if not separator
	{
		word_size++;
		i++;
	}





int		main()
{
	char **str;
	str[] = "qweqwqwewqeqw";
	res = ft_split_whitespaces(*str);
	printf("%s", res);
}

