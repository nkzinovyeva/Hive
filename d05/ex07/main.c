/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:49:28 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/17 12:08:30 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
		i++;
	}
	if (((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0')) && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

int	main(void)
 {
   char str2[10] = "Abzzzzzz";
   char str1[10] = "Azczzzz";
   int result1 = strncmp(str1, str2, 4);
   int result2 = ft_strncmp(str1, str2, 4);
   printf("%i %i", result1, result2);
  return (0);
 }
