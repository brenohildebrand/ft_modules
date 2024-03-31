/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:27:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 20:29:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "utils.h"

t_i32	any_compare(t_any instance, t_any another_instance)
{
	if (instance->type != another_instance->type)
	{
		print_to_stderr("No way! You can't compare two different types.");
	}
	if (instance->type->compare == NULL)
	{
		print_to_stderr("No way! The type ");
		print_to_stderr(instance->type->name);
		print_to_stderr(" does not contain a compare function.\n");
		quit(1);
	}
	if (instance->type->is_instance)
	{
		return (instance->type->compare(\
			instance->value.instance, \
			another_instance->value.instance));
	}
	else if (instance->type->is_value)
	{
		return (instance->type->compare(instance, another_instance));
	}
	print_to_stderr("Oops. Something is weird on any_compare.");
	quit(1);
	return (0);
}
