/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8_to_any.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:47:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/04/04 15:50:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "i8.h"
#include "any.h"

t_any	i8_to_any(t_i8 value)
{
	t_any	instance;

	instance = any_create();
	instance->type = i8();
	instance->value.i8 = value;
	return (instance);
}
