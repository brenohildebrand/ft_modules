/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_for_each_with_data.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:21:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:23:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_for_each_with_data(
	t_chain instance,
	void (*callback)(t_any, t_i32, void *),
	void *data
){
	t_i32			index;
	t_chain_node	current;

	index = 0;
	current = instance->head;
	while (current)
	{
		callback(current->value, index, data);
		index++;
		current = current->next;
	}
}
