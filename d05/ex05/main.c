/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:09:14 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/17 12:05:55 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i; // for source
	int j; //what looking for

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i +j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
					return (&str[i]);
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char str1[13] = "aw34esomep6oo"; //where
	char str2[5] = "some"; //what
	char *index_str1;
	char *index_str2;
	index_str1 = strstr(str1, str2);
	printf("%s\n",index_str1);
	index_str2 = ft_strstr(str1, str2);
	printf("%s\n",index_str2);
	return(0);
}
