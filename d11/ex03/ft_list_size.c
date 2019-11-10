/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 19:19:28 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/24 12:47:47 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *element;

	element = malloc(sizeof(t_list));
	if (element)
	{
		element->next = NULL;
		element->data = data;
	}
	return (element);
}


void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}


int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*list;

	i = 0;
	list = begin_list;
	if (list)
	{
		i = 1;
		while (list->next)
		{
			list = list->next;
			i++;
		}
	}
	return (i);
}

int	main()
{
	char *data = "abrtftg";
	t_list *list;

	list = ft_create_elem(data);
	ft_list_push_back(&list, data);
	ft_list_push_back(&list, data);
	ft_list_push_back(&list, data);
	ft_list_push_back(&list, data);
	ft_list_push_back(&list, data);
	ft_list_push_back(&list, data);
	ft_list_push_back(&list, data);
	int leng;

	leng = ft_list_size(list);

	printf("Size is %d \n", leng);
	return (0);

}
