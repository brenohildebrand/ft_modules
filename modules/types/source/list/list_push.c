/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:15:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_push(t_list instance, t_any value)
{
	if (instance->length + 1 > (instance->capacity * 3) / 4 || \
		instance->end == instance->capacity - 1)
	{
		list_expand(instance);
	}
	instance->end++;
	instance->content[instance->end] = value;
	instance->length++;
	instance->size++;
}
