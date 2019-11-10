/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:16:44 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/18 10:16:20 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)// my putstr
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)//my comparing str code
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_swap(char **a, char **b)// call the whole argv
{
	char *temp;// make a link to save

	temp = *a;
	*a = *b;
	*b = temp;
}


int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc - 1)// until last param
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)// compare if there is diff 
		{
			ft_swap(&argv[i], &argv[i + 1]);// swap param until end
			i = 1;// for chech again
		}
		else
		{
			i++;// follow next param
		}
	}
	i = 1;// to compare with argc
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
