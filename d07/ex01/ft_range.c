/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 22:10:13 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/18 10:36:50 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	while (min >= max)
		return (NULL);
	arr = (int*)malloc(sizeof(*arr) * (max - min));
	while (max > min)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (0);
}

int main(void)
{
   int *i;
   i = ft_range(10,20);

  return 0;
}
