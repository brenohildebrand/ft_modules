/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_assign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:02:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 15:18:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"
#include "any.h"

static void	update_size(t_chain instance, t_any new_value, t_any current_value)
{
	if (value != NULL && current_value == NULL)
	{
		instance->size++;
	}
	else if (value == NULL && current_value != NULL)
	{
		instance->size--;
	}
}

void	chain_assign(t_chain instance, t_any value, t_i32 index)
{
	t_chain_node	current;

	if (index < 0)
	{
		index = instance->length + index;
	}
	if (index < 0 || index >= instance->length)
	{
		error("No way! The chain can't handle that.");
	}
	current = instance->head;
	while (index--)
	{
		current = current->next;
	}
	update_size(instance, value, current->value);
	if (current->value != NULL)
	{
		any_destroy(current->value);
	}
	current->value = value;
}
