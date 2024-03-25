/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:14:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 16:25:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Removes the first element of the instance and returns it.
 * 
 * @param instance The instance to shift.
 * @return The first element of the instance.
 */
t_any	shift(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type");
	assert(type->shift != NULL, "Type does not have the shift function");
	return(type->shift(instance));
}
