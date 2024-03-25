/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_node_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:51:56 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 18:53:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_chain_node	chain_node_copy(t_chain_node instance)
{
	t_chain_node	new_instance;

	new_instance = chain_node_create();
	new_instance->value = any_copy(instance->value);
	new_instance->next = instance->next;
	new_instance->previous = instance->previous;
	return (new_instance);
}
