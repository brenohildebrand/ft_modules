/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u64_to_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:39:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:40:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "u64.h"

t_any	u64_to_any(t_u64 value)
{
	t_any	instance;

	instance = create(any);
	instance->type = u64();
	instance->value.u64 = value;
	return (instance);
}
