/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:08:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 20:41:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "utils.h"
#include "any.h"

static t_i32	get_normalized_index(t_list instance, t_i32 index)
{
	if (index < 0)
	{
		index = instance->length + index;
	}
	if (index < 0)
	{
		print_to_stdout("No way! ");
		print_to_stdout("You can't access an index on a list ");
		print_to_stdout("that is less than its negative length.");
		quit(1);
	}
	return (index);
}

void	list_set(t_list instance, t_any key, t_any value)
{
	t_i32	index;

	index = any_to_i32(key);
	index = get_normalized_index(instance, index);
	if (index >= instance->capacity)
	{
		while (index >= instance->capacity)
			list_expand(instance);
		instance->length = index + 1;
		instance->start = (instance->capacity - instance->length) / 2;
		instance->end = instance->start + index;
	}
	if (instance->content[instance->start + index] != NULL)
	{
		any_destroy(instance->content[instance->start + index]);
		instance->content[instance->start + index] = value;
	}
	else
	{
		instance->content[instance->start + index] = value;
		instance->size++;
	}
}
