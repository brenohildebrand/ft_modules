/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 01:48:30 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 20:01:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_type	list(void)
{
	static struct s_type	type = {
		.name = "list",
		.size = sizeof(struct s_list),
		.is_instance = TRUE,
		.is_sequence = FALSE,
		.is_value = FALSE,
		.create = (t_create)list_create,
		.destroy = (t_destroy)list_destroy,
		.copy = (t_copy)list_copy,
		.compare = (t_compare)list_compare,
		.get = (t_get)list_get,
		.set = (t_set)list_set,
		.push = (t_push)list_push,
		.pop = (t_pop)list_pop,
		.unshift = (t_unshift)list_unshift,
		.shift = (t_shift)list_shift,
		.rotate = (t_rotate)list_rotate,
		.reverse_rotate = (t_reverse_rotate)list_reverse_rotate,
		.swap = (t_swap)list_swap,
		.print = (t_print)list_print,
		.for_each = (t_for_each)list_for_each,
		.reduce = (t_reduce)list_reduce,
		.sort = (t_sort)list_sort,
		.get_length = (t_get_length)list_get_length,
		.is_sorted = (t_is_sorted)list_is_sorted,
		.to_any = (t_to_any)list_to_any
	};

	return (&type);
}

// static void	init_type(void)
// {
// 	init_basic();
// 	init_operations();
// }

// t_type	list(void)
// {
// 	static struct s_type	type = { .name = NULL };

// 	if (type.name == NULL)
// 		init_type(&type);
// 	return (type);
// }
