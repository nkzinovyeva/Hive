/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_top.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 14:01:22 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 17:48:55 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TOP_H
# define FT_TOP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_rush_info
{
	char	name[20];
	char	*print;
}				t_rush_info;

char	*ft_strcpy(char *str1, const char *str2);
char	*ft_strncpy(char *str1, const char *str2, int len);
char	*ft_top00(int len);
char	*ft_bot00(int len);
char	*ft_mid00(int len);
char	*ft_top01(int len);
char	*ft_bot01(int len);
char	*ft_mid01(int len);
char	*ft_top02(int len);
char	*ft_bot02(int len);
char	*ft_mid02(int len);
char	*ft_top03(int len);
char	*ft_bot03(int len);
char	*ft_mid03(int len);
char	*ft_top04(int len);
char	*ft_bot04(int len);
char	*ft_mid04(int len);

#endif
