/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:36:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 18:56:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_chain	chain_copy(t_chain instance)
{
	t_chain			new_instance;
	t_chain_node	current;

	new_instance = chain_create();
	current = instance->head;
	while (current)
	{
		chain_push(new_instance, any_copy(current->value));
		current = current->next;
	}
	return (new_instance);
}
