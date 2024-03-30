/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:00:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 15:31:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"
#include "i32.h"
#include "any.h"

// -- O(n^2)

static void	swap_current_with_smallest(
	t_list instance,
	t_i32 current_index,
	t_i32 smallest_index
){
	t_i32	current;
	t_i32	smallest;

	current = any_as_i32(list_get(instance, i32_to_any(current_index)));
	smallest = any_as_i32(list_get(instance, i32_to_any(smallest_index)));
	list_set(instance, i32_to_any(current_index), i32_to_any(smallest));
	list_set(instance, i32_to_any(smallest_index), i32_to_any(current));
}

void	list_sort(t_list instance)
{
	t_i32	i;
	t_i32	j;
	t_any	smallest;
	t_i32	smallest_index;
	t_any	current;

	i = 0;
	while (i < instance->length)
	{
		smallest_index = i;
		smallest = list_get(instance, i32_to_any(smallest_index));
		j = i + 1;
		while (j < instance->length)
		{
			current = list_get(instance, i32_to_any(j));
			if (any_compare(current, smallest) < 0)
			{
				smallest = current;
				smallest_index = j;
			}
			j++;
		}
		swap_current_with_smallest(instance, i, smallest_index);
		i++;
	}
}
