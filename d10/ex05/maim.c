/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 09:49:36 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/24 14:51:17 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int cmpnbr(int a, int b)
{
	return a - b;
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i + 1 < length)
	{
		if(f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char** argv)
{
	if (argc < 1)
		return 0;
	int test[argc - 1];
	for (int i = 1; i < argc; i++)
		test[i - 1] = atoi(argv[i]);

	printf("%d", ft_is_sort(test, argc - 1, cmpnbr));
}
