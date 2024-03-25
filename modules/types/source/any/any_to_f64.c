/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_f64.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:20:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:20:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_f64	any_to_f64(t_any instance)
{
	t_f64	value;

	value = instance->value.f64;
	any_destroy(instance);
	return (value);
}
