/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_retrieve.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:19:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 15:19:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_any	chain_retrieve(t_chain instance, t_i32 index)
{
	t_any	current;

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
	return (current->value);
}
