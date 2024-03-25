/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:31:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:35:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_i32	chain_is_sorted(t_chain instance)
{
	t_chain_node	current;
	t_chain_node	previous;

	if (instance->length <= 1)
	{
		return (TRUE);
	}
	previous = instance->head;
	current = instance->head->next;
	while (current)
	{
		if (any_compare(previous->value, current->value) > 0)
		{
			return (FALSE);
		}
		previous = current;
		current = current->next;
	}

	return (TRUE);
}
