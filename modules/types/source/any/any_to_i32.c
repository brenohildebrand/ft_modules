/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_i32.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:04:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 02:05:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"

t_i32	any_to_i32(t_any instance)
{
	t_i32	value;

	value = instance->value.i32;
	any_destroy(instance);
	return (value);
}
