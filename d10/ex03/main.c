/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:31:07 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/24 14:45:44 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	check(char *str)
{
	int i;
	i = 0;
	if (str[i++] == 'a')
		return (1);
	else
		return (0);
}


int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	char **s;
	s  = (char**)malloc(sizeof(char*) * 3);
	s[0] = "sss";
	s[1] = "sff";
	s[2] = "a";
	s[3] = 0;
	printf("%d\n", ft_any(s, &check));
	return (0);
}
