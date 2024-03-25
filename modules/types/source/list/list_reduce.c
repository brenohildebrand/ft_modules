/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_reduce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:58:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/10 12:18:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_reduce(
	t_list instance,
	t_any accumulator,
	t_any (*callback)(t_any, t_any, int)
){
	t_i32	i;
	t_any	current;

	i = 0;
	while (i < instance->length)
	{
		current = instance->content[instance->start + i];
		accumulator = callback(accumulator, current, i);
		i++;
	}
	return (accumulator);
}
