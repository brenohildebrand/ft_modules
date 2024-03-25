/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i64_to_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:29:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:30:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i64.h"

t_any	i64_to_any(t_i64 value)
{
	t_any	instance;

	instance = create(any);
	instance->type = i64();
	instance->value.i64 = value;
	return (instance);
}
