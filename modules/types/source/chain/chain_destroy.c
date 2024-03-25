/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:26:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 19:31:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_destroy(t_chain instance)
{
	t_chain_node	current;
	t_chain_node	next;

	if (instance)
	{
		current = instance->head;
		while (current)
		{
			next = current->next;
			chain_node_destroy(current);		
			current = next;
		}
		delete(instance);
	}
}
