/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_shift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:04:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 19:09:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_any	chain_shift(t_chain instance)
{
	t_any	value;

	if (instance->length == 0)
	{
		return (NULL);
	}
	value = instance->head->value;
	delete(instance->head);
	if (instance->head == instance->tail)
	{
		instance->head = NULL;
		instance->tail = NULL;
	}
	else
	{
		instance->head = instance->head->next;
		instance->head->previous = NULL;
	}
	instance->length--;
	if (value != NULL)
	{
		instance->size--;
	}
	return (value);
}
