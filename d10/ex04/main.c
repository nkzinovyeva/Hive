/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 18:38:00 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/24 14:47:25 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int starts_with_z(char* str)
{
	return str[0] == 'z';
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			res++;
		++i;
	}
	return (res);
}

int main(int argc, char** argv)
{
	printf("%d", ft_count_if(argv + 1, &starts_with_z));
	if (argc < 2)
		return 0;
}
