/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:57:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 19:54:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_i32	any_compare(t_any instance, t_any another_instance)
{
	if (instance->type != another_instance->type)
		return (1);
	if (instance->type->compare == NULL)
	{
		error("No way. You can't compare a type that does not have a compare function.");
	}
	if (instance->type->is_instance)
	{
		return (instance->type->compare(instance->value.instance, another_instance->value.instance));		
	}
	else if (instance->type->is_value)
	{
		return (instance->type->compare(instance, another_instance));
	}
	else if (instance->type->is_sequence)
	{
		return (instance->type->compare(instance, another_instance));
	}
	error("Oops. Something is weird on any_compare.");
	return (0);
}
