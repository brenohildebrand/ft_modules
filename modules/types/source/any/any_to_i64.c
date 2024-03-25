/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_i64.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:18:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:18:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_i64	any_to_i64(t_any instance)
{
	t_i64	value;

	value = instance->value.i64;
	any_destroy(instance);
	return (value);
}
