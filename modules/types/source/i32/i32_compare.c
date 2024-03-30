/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:38:02 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 18:39:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"

t_i32	i32_compare(t_any instance, t_any another_instance)
{
	t_i32	value;
	t_i32	another_value;

	value = any_as_i32(instance);
	another_value = any_as_i32(another_instance);
	if (value < another_value)
	{
		return (-1);
	}
	else if (value == another_value)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
