/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:57:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 19:14:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_push(t_chain instance, t_any value)
{
	t_chain_node	new_node;

	new_node = chain_node_create();
	new_node->value = value;
	if (instance->head == NULL)
	{
		instance->head = new_node;
		instance->tail = new_node;
	}
	else
	{
		instance->tail->next = new_node;
		new_node->previous = instance->tail;
		instance->tail = new_node;
	}
	instance->length++;
	if (value != NULL)
	{
		instance->size++;
	}
}
