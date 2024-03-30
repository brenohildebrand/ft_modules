/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:32:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 01:32:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"

t_any	any_copy(t_any instance)
{
	t_any	new_instance;

	new_instance = create(any);
	new_instance->type = instance->type;
	new_instance->value = instance->value;
	return (new_instance);
}
