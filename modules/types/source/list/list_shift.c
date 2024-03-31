/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_shift.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 21:50:50 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 21:50:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_shift(t_list instance)
{
	t_any	value;

	if (instance->end < instance->start)
		return (NULL);
	value = instance->content[instance->start];
	instance->content[instance->start] = NULL;
	instance->start++;
	instance->length--;
	instance->size--;
	return (value);
}
