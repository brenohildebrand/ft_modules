/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_reduce.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:23:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:27:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_reduce(
	t_chain instance,
	t_any accumulator,
	t_any (*callback)(t_any, t_any, t_i32)
){
	t_i32			index;
	t_chain_node	current;	

	index = 0;
	current = instance->head;
	while (current)
	{
		accumulator = callback(accumulator, current, index);
		index++;
		current = current->next;
	}
	return (accumulator);
}
