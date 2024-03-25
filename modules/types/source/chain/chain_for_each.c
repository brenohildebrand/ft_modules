/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_for_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:18:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:21:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_for_each(t_chain instance, void (*callback)(t_any, t_i32))
{
	t_i32			index;
	t_chain_node	current;

	index = 0;
	current = instance->head;
	while (current)
	{
		callback(current->value, index);
		index++;
		current = current->next;
	}
}
