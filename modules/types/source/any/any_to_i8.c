/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_i8.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:45:18 by bhildebr          #+#    #+#             */
/*   Updated: 2024/04/04 15:46:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"

t_i8	any_to_i8(t_any instance)
{
	t_i8	value;

	value = instance->value.i8;
	any_destroy(instance);
	return (value);
}
