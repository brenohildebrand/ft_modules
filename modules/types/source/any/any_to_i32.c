/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_i32.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:16:56 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:17:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_i32	any_to_i32(t_any instance)
{
	t_i32	value;

	value = instance->value.i32;
	any_destroy(instance);
	return (value);
}
