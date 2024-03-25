/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:20:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:43:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

static void	insert(t_chain instance, t_i32 index, t_any value)
{
	t_chain_node	new_node;
	t_chain_node	current;

	new_node = chain_node_create();
	new_node->value = value;
	current = instance->head;
	while (index--)
	{
		current = current->next;
	}
	new_node->next = current;
	new_node->previous = current->previous;
	current->previous->next = new_node;
	current->previous = new_node;
	instance->length++;
	if (value != NULL)
	{
		instance->size++;
	}
}

void	chain_insert(t_chain instance, t_any key, t_any value)
{
	t_i32	index;

	index = any_as_i32(key);
	if (index < 0)
	{
		index = instance->length + index;
	}
	if (index < 0 || index > instance->length)
	{
		error("No way! The chain can't handle that.");
	}
	if (index == 0)
	{
		chain_unshift(instance, value);		
	}
	else if (index == instance->length)
	{
		chain_push(instance, value);
	}
	else
	{
		insert(instance, index, value);
	}
}
