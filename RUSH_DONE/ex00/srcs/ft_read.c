/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 23:49:57 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

int		findx(char *buf, int chars)
{
	int x;
	int i;
	
	i = 0;
	x = 0;
	while (x < chars && buf[i] != '\n' && buf[i] != '\0')
	{
		++i;
		++x;
	}
	return (x);
}

t_coords	*validate(void *buf, int chars)
{
	int			j;
	int			i;
	t_coords	*found;
	char		*c_buf;

	found = (t_coords *)malloc(sizeof(t_coords));
	c_buf = (char *)buf;
	found->x = 0;
	found->y = 0;
	if (chars == 0 || c_buf[0] == 0 || c_buf[0] == '\n')
		return (found);
	found->x = findx(c_buf, chars);
	j = 0;
	i = 0;
	while ((i + 1) * j < chars)
	{
		i = 0;
		while (i < chars && c_buf[i] != '\n' && c_buf[i] != '\0')
			++i;
		if (c_buf[i] == 0 || i != found->x)
			return (found);
		++j;
	}
	found->y = j;
	return (found);
}

void	*ft_read(t_coords *findings)
{
	int			fd;
	void		*buf;
	char		first_line[1 + BUFFER_SIZE];
	t_coords	*found;
	int			chars;
	int		debugging = 1;

	buf = (void *)malloc((1 + BUFFER_SIZE) * sizeof(char));
	chars = read(0, buf, BUFFER_SIZE);
	if (debugging) write(1, buf, BUFFER_SIZE); // TODO remove
	if (((char *)buf)[0] > 0 && ((char *)buf)[0] != '\n')
	{
		found = validate(buf, chars);
		if (found->x == 0 || found->y == 0)
			return NULL;
		findings->x = found->x;
		findings->y = found->y;
		return (buf);
	}
	return (NULL);
}

t_rush_info	**set_knowledge(t_rush_info **goal, t_coords *coords_found)
{
	goal[0] = ft_rush_collector00(coords_found->x, coords_found->y);
	goal[1] = ft_rush_collector01(coords_found->x, coords_found->y);
	goal[2] = ft_rush_collector02(coords_found->x, coords_found->y);
	goal[3] = ft_rush_collector03(coords_found->x, coords_found->y);
	goal[4] = ft_rush_collector04(coords_found->x, coords_found->y);
	return (goal);
}

void	print_coords(t_coords *xy)
{
	ft_putchar('[');
	ft_putnbr(xy->x);
	ft_putstr("] [");
	ft_putnbr(xy->y);
	ft_putchar(']');
}

void	print_tag(t_coords *xy, t_rush_info **rush, int *nb)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (nb[i])
		{
			ft_putstr(rush[i]->name);
			ft_putchar(' ');
			print_coords(xy);
			ft_putstr(" || ");
		}
		++i;
	}
	ft_putstr(rush[i]->name);
	ft_putchar(' ');
	print_coords(xy);
}

int		*find_matches(void *buf, t_coords *coords_found)
{
	int debugging = 0;
	t_rush_info	**knowns;
	t_rush_info	*rush00;
	int i;
	int *found;

	found = (int *)malloc(5*sizeof(int));
	i = 0;
	while (i++ < 5)
		found[i] = 0;
	knowns = (t_rush_info **)malloc(5 * sizeof(t_rush_info *));
	if (coords_found == NULL)
		return (0);
	knowns = set_knowledge(knowns, coords_found);
	i = 0;
	if (debugging) printf("buf:\n%s\n", ((char *)buf));
	while (i < 5)
	{
		if (!strcmp(buf, knowns[i]->print))
		{
			found[i] += 1;
		}
		else
			if (debugging) ft_putstr("aucune\n");
		if (debugging) printf("%s\n", knowns[i]->print);
		++i;
	}
	print_tag(coords_found, knowns, found);
	return (found);
}
