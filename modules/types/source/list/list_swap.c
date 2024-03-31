/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 03:52:18 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 03:56:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "utils.h"
#include "any.h"

void	list_swap(t_list instance, t_any key, t_any another_key)
{
	t_any	temp;
	t_i32	index;
	t_i32	another_index;

	index = any_to_i32(key);
	another_index = any_to_i32(another_key);
	if (index < 0)
		index = instance->length + index;
	if (another_index < 0)
		another_index = instance->length + another_index;
	if (index < 0 || index >= instance->length)
	{
		print_to_stderr("No way! You can't swap an invalid index.");
		quit(1);
	}
	if (another_index < 0 || another_index >= instance->length)
	{
		print_to_stderr("No way! You can't swap an invalid index.");
		quit(1);
	}
	temp = instance->content[instance->start + index];
	instance->content[instance->start + index] = \
		instance->content[instance->start + another_index];
	instance->content[instance->start + another_index] = temp;
}
