/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:57:04 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 18:53:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i32.h"

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
