/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:42:50 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 10:17:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

// -- check if it's sorted in ascending order
t_i32	list_is_sorted(t_list instance)
{
	t_i32	i;
	t_i32	is_sorted;
	t_any	current;
	t_any	previous;

	is_sorted = 1;
	i = 1;
	while (i < instance->length)
	{
		current = instance->content[instance->start + i];
		previous = instance->content[instance->start + i - 1];
		if (compare(previous, current) > 0)
		{
			is_sorted = 0;
		}
		i++;
	}
	return (is_sorted);
}
