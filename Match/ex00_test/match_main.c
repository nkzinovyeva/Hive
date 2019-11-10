/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 12:57:21 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/21 10:43:10 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);// if we still at the end of str and don't fly away ==> match
	if (*s1 == '\0')// if str is over, keep check  (migth  be *)
	{
		if (*s2 == '*')
			return (match(s1, ++s2));//if there is *, keep check  what remains
		else
			return (0);
	}
	if (*s2 == '*')
		return (match((s1 + 1), s2) || match(s1, (s2 + 1)));// if there is *  to compare  s1+* and s2, or s1  and  s2+*
	if (*s1 == *s2)
		return (match(++s1, ++s2));// if current char are the same, keep compare)
	if (*s1 != *s2)// if not compare return (0)
		return (0);
	return (0);
}

int	main()
{
	char *s1;
	char *s2;
	s1 = "main";
	s2 = "*n";
	printf("%d\n", match(s1, s2));
	return (0);
}
