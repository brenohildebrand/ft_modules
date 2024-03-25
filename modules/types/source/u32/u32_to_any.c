/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u32_to_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:36:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:41:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "u32.h"

t_any	u32_to_any(t_u32 value)
{
	t_any	instance;

	instance = create(any);
	instance->type = u32();
	instance->value.u32 = value;
	return (instance);
}
