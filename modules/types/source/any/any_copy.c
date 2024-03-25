/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:54:07 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:03:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_any	any_copy(t_any instance)
{
	t_any	new_instance;

	new_instance = create(any);
	new_instance->type = instance->type;
	new_instance->value = instance->value;
	return (new_instance);
}
