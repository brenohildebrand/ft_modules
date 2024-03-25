/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f64_to_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:09:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:57:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "f64.h"

t_any	f64_to_any(t_f64 value)
{
	t_any	instance;

	instance = create(any);
	instance->type = f64();
	instance->value.f64 = value;
	return (instance);
}
