/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8_to_any.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:33:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:34:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "u8.h"

t_any	u8_to_any(t_u8 value)
{
	t_any	instance;

	instance = create(any);
	instance->type = u8();
	instance->value.u8 = value;
	return (instance);
}
