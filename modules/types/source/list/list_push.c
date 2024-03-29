/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:52:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 20:53:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
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
