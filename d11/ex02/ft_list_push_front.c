/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:41:55 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/23 19:13:03 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	list->next = *begin_list;
	*begin_list = list;
}




t_list* ft_create_elem(void* data)
{
	t_list* item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}

void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}

int main()
{
	t_list* list = 0;
	ft_list_push_front(&list, "asdf");
	crap_a_list(list);
	ft_list_push_front(&list, "qwer");
	ft_list_push_front(&list, "zxcv");
	crap_a_list(list);
	list = 0;
	ft_list_push_front(&list, "uiop");
	ft_list_push_front(&list, "hjkl");
	crap_a_list(list);
}


