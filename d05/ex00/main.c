/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:41:10 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/17 11:06:10 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int	main(void)
{
	char str1[] = "He\nllo";

	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}
