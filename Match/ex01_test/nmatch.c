/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 11:21:12 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/21 11:49:54 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (nmatch(s1, ++s2));
		else
			return (0);
	}
	if (*s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	if (*s1 == *s2)
		return (nmatch(++s1, ++s2));
	if (*s1 != *s2)
		return (0);
	return (-8);
}
