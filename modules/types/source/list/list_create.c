/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:29:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:20:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	list_create(void)
{
	t_list	instance;

	instance = (t_list)new(list);
	instance->capacity = LIST_INITIAL_CAPACITY;
	instance->content = \
		(t_any *)allocate(instance->capacity * sizeof(t_any));
	instance->length = 0;
	instance->size = 0;
	instance->start = instance->capacity / 2;
	instance->end = instance->start - 1;
	return (instance);
}
