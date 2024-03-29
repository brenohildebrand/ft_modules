/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32_to_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:50:54 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 20:52:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"
#include "i32.h"

t_any	i32_to_any(t_i32 value)
{
	t_any	instance;

	instance = any_create();
	instance->type = i32();
	instance->value.i32 = value;
	return (instance);
}
