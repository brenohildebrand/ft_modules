/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_unshift.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:30:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:30:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_unshift(t_list instance, t_any value)
{
	if (instance->length + 1 > (instance->capacity * 3) / 4 || \
		instance->start == 0)
	{
		list_expand(instance);
	}
	instance->start--;
	instance->content[instance->start] = value;
	instance->length++;
	instance->size++;
}
