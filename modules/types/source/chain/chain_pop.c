/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:00:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 19:08:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_any	chain_pop(t_chain instance)
{
	t_any			value;

	if (instance->length == 0)
	{
		return (NULL);
	}
	value = instance->tail->value;
	delete(instance->tail);
	if (instance->head == instance->tail)
	{
		instance->head = NULL;
		instance->tail = NULL;
	}
	else
	{
		instance->tail = instance->tail->previous;
		instance->tail->next = NULL;
	}
	instance->length--;
	if (value != NULL)
	{
		instance->size--;
	}
	return (value);
}
