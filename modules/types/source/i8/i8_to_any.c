/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8_to_any.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:23:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:58:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i8.h"

t_any	i8_to_any(t_i8 value)
{
	t_any	instance;

	instance = create(any);
	instance->type = i8();
	instance->value.i8 = value;
	return (instance);
}
