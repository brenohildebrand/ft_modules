/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_node_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:48:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 18:50:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_chain_node	chain_node_create(void)
{
	t_chain_node	instance;

	instance = (t_chain_node)new(chain_node);
	instance->value = NULL;
	instance->next = NULL;
	instance->previous = NULL;
	return (instance);
}
