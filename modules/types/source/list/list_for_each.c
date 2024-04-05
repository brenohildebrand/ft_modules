/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_for_each.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:10:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/04/05 15:12:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"

void	list_for_each(
	t_list instance,
	void (*callback)(t_any, t_i32, void *),
	void *argument
){
	t_i32	index;
	t_any	current;

	index = 0;
	while (index < instance->length)
	{
		current = instance->content[instance->start + index];
		callback(current, index, argument);
		index++;
	}
}
