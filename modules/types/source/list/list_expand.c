/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_expand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:53:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 20:53:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"

void	list_expand(t_list instance)
{
	t_any	*new_content;
	t_i32	new_capacity;
	t_i32	new_start;
	t_i32	new_end;
	t_i32	i;

	new_capacity = instance->capacity * 2;
	new_start = (new_capacity - instance->length) / 2;
	new_end = new_start + instance->length - 1;
	new_content = (t_any *)allocate(new_capacity * sizeof(t_any));
	i = 0;
	while (i < instance->length)
	{
		new_content[new_start + i] = instance->content[instance->start + i];
		i++;
	}
	deallocate(instance->content);
	instance->capacity = new_capacity;
	instance->start = new_start;
	instance->end = new_end;
	instance->content = new_content;
}
