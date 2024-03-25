/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:38:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 13:20:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

static t_any	remove(t_chain instance, t_i32 index)
{
	t_any			value;
	t_chain_node	current;

	current = instance->head;
	while (index--)
	{
		current = current->next;
	}
	value = current->value;
	current->previous->next = current->next;
	current->next->previous = current->previous;
	delete(current);
	instance->length--;
	if (value != NULL)
	{
		instance->size--;
	}
	return (value);
}

t_any	chain_remove(t_chain instance, t_any key)
{
	t_i32			index;
	t_any			value;
	t_chain_node	current;

	index = any_as_i32(key);
	if (index < 0)
	{
		index = instance->length + index;
	}
	if (index < 0 || index >= instance->length)
	{
		error("No way! The chain can't handle that.");
	}
	if (index == 0)
	{
		return (chain_shift(instance));
	}
	else if (index == instance->length - 1)
	{
		return (chain_pop(instance));
	}
	else
	{
		return (remove(instance, index));
	}
}
