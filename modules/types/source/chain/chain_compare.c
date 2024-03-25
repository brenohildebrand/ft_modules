/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_compare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:44:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 14:57:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"
#include "any.h"

static t_i32	compare(t_chain instance, t_chain another_instance)
{
	t_i32	boolean;
	t_any	current;
	t_any	another_current;
	
	current = instance->head;
	another_current = another_instance->head;
	while (current != NULL)
	{
		boolean = any_compare(current->value, another_current->value);
		if (boolean != 0)
		{
			return (boolean);
		}
		current = current->next;
		another_current = another_current->next;
	}
	return (0);
}

t_i32	chain_compare(t_chain instance, t_chain another_instance)
{
	if (instance == NULL && another_instance == NULL)
	{
		return (0);
	}
	else if (instance == NULL)
	{
		return (-1);
	}
	else if (another_instance == NULL)
	{
		return (1);
	}
	if (instance->length != another_instance->length)
	{
		return (instance->length - another_instance->length);
	}
	else
	{
		return (compare(instance, another_instance));
	}
}
