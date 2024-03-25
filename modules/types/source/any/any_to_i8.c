/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_i8.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:14:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:15:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_i8	any_to_i8(t_any instance)
{
	t_i8	value;

	value = instance->value.i8;
	any_destroy(instance);
	return (value);
}
