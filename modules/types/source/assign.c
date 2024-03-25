/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:23:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 17:30:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Assigns a value to an existing element in the instance.
 * 
 * @param instance The instance to look up the key and assign a value.
 * @param key The key to identify the element to be changed.
 * @param value The value to assign.
 */
void	assign(void *instance, t_any key, t_any value)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->assign != NULL, "Type does not have the assign function.");
	type->assign(instance, key, value);
}
