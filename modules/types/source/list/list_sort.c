/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:07:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/06 16:24:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

// -- O(n^2)

static void	swap_current_with_smallest(
	t_list instance,
	t_i32 current_index,
	t_i32 smallest_index
){
	t_any	current;
	t_any	smallest;

	current = list_get(instance, i32_to_any(current_index));
	smallest = list_get(instance, i32_to_any(smallest_index));
	list_set(instance, i32_to_any(current_index), smallest);
	list_set(instance, i32_to_any(smallest_index), current);
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
		smallest = list_get(instance, i32_to_any(i));
		smallest_index = i;
		j = i + 1;
		while (j < instance->length)
		{
			current = list_get(instance, i32_to_any(j));
			if (compare(current, smallest) < 0)
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
