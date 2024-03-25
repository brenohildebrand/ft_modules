/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_u32.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:17:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:38:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_u32	any_to_u32(t_any instance)
{
	t_u32	value;

	value = instance->value.u32;
	any_destroy(instance);
	return (value);
}
