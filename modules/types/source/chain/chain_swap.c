/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:49:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:07:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

static void	swap(t_chain instance, t_i32 index, t_i32 another_index)
{
	t_chain_node	current;
	t_i32			current_index;
	t_chain_node	node;
	t_chain_node	another_node;
	t_any			temp;

	if (instance->length <= 1)
		return ;
	current_index = 0;
	current = instance->head;
	while (current_index != index)
	{
		current = current->next;	
	}
	node = current;
	current_index = 0;
	current = instance->head;	
	while (current_index != another_index)
	{
		current = current->next;
	}
	another_node = current;
	temp = node->value;
	node->value = another_node->value;
	another_node->value = temp;
}

void	chain_swap(t_chain instance, t_any key, t_any another_key)
{
	t_i32	index;
	t_i32	another_index;

	index = any_as_i32(key);
	another_index = any_as_i32(another_key);
	if (index < 0)
	{
		index = instance->length + index;
	}
	if (index < 0 || index >= instance->length)
	{
		error("No way! The chain can't handle that key.");
	}
	if (another_index < 0)
	{
		another_index = instance->length + another_index;
	}
	if (another_index < 0 || another_index >= instance->length)
	{
		error("No way! The chain can't handle that key");
	}
	swap(instance, index, another_index);
}
