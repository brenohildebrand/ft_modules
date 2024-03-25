/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_unshift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:09:49 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 19:17:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_unshift(t_chain instance, t_any value)
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
		new_node->next = instance->head;
		instance->head->previous = new_node;
		instance->head = new_node;
	}
	instance->length++;
	if (value != NULL)
	{
		instance->size++;
	}
}
