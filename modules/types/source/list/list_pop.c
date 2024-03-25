/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:43:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_pop(t_list instance)
{
	t_any	value;

	if (instance->end < instance->start)
		return (NULL);
	value = instance->content[instance->end];
	instance->content[instance->end] = NULL;
	instance->end--;
	instance->length--;
	instance->size--;
	return (value);
}
