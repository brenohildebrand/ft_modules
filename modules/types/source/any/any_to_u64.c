/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_u64.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:18:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:19:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_u64	any_to_u64(t_any instance)
{
	t_u64	value;

	value = instance->value.u64;
	any_destroy(instance);
	return (value);
}
