/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agloba <agloba@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:51:55 by agloba            #+#    #+#             */
/*   Updated: 2019/07/24 14:44:20 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ab(int a)
{
	int result;

	result = a + 1;
	return (result);
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	i = 0;
	arr = (int*)malloc(sizeof(int) * length);
		if (arr == NULL)
			return (arr);
	while (i < length)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	return (arr);
}
	int        main(void)
{
    int i;
    int num[] = { 0, 1, 2, 3 };
    int *res;
    res = ft_map(num, 4, &ab);
    for (i = 0; i < 4; i++)
        printf("%d ", res[i]);
    return (0);
}
