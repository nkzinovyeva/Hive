/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:58:45 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/22 11:16:40 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2);

int	main()
{
	char *s1_1;
	char *s1_2;
	char *s2_1;
	char *s2_2;
	char *s3_1;
	char *s3_2;
	char *s4_1;
	char *s4_2;





	s1_1 = "abcd";
	s1_2 = "abcd***";
	s2_1 = "";
	s2_2 = "**";
	s3_1 = "ad";
	s3_2 = "a***d";
	s4_1 = "fdsf";
	s4_2 = "fd*s";





	printf("%d\n", match(s1_1, s1_2));
		printf("%d\n", match(s2_1, s2_2));
		printf("%d\n", match(s3_1, s3_2));
		printf("%d\n", match(s4_1, s4_2));
	return (0);
}
