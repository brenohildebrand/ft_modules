/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:07:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:12:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_print(t_chain instance)
{
	t_chain_node	current;

	console("[CHAIN]\n");
	current = instance->head;
	while (current)
	{
		any_print(current->value);
		current = current->next;
	}
}
