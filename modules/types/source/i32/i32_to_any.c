/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32_to_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:26:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:27:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i32.h"

t_any	i32_to_any(t_i32 value)
{
	t_any	instance;

	instance = create(any);
	instance->type = i32();
	instance->value.i32 = value;
	return (instance);
}
