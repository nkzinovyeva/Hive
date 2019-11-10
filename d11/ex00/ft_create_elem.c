/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:26:15 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/23 19:08:50 by nzinovye         ###   ########.fr       */
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

int main()
{
	t_list* item = ft_create_elem((void *)"asdf");
	printf("%s\n", (char*)item->data);
	printf("%p\n", item->next);
}
