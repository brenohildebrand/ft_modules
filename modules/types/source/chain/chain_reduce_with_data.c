/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_reduce_with_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:28:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:28:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_reduce_with_data(
	t_chain instance,
	t_any accumulator,
	t_any (*callback)(t_any, t_any, t_i32, void *),
	void *data
){
	t_i32			index;
	t_chain_node	current;	

	index = 0;
	current = instance->head;
	while (current)
	{
		accumulator = callback(accumulator, current, index, data);
		index++;
		current = current->next;
	}
	return (accumulator);
}
