/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_compare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:49:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 18:34:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_i32	list_compare(t_list instance, t_list another_instance)
{
	t_i32	i;

	if (instance->length != another_instance->length)
		return (1);
	if (instance->size != another_instance->size)
		return (1);
	i = 0;
	while (i < instance->length)
	{
		if (any_compare(instance->content[instance->start + i],
			another_instance->content[another_instance->start + i]) != 0)
				return (1);
		i++;
	}
	return (0);
}
