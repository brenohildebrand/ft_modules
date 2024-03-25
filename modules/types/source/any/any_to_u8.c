/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_u8.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:16:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:16:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_u8	any_to_u8(t_any instance)
{
	t_u8	value;

	value = instance->value.u8;
	any_destroy(instance);
	return (value);
}
