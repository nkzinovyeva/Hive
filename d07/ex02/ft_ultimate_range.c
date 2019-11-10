/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 13:19:04 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/18 13:43:02 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	while (max > min)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (i);
}
