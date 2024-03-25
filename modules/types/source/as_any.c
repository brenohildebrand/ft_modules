/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   as_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:36:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 20:38:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Converts a copy of the type to any and returns it.
 * 
 * @param instance The instance to convert.
*/
t_any	as_any(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->as_any != NULL, "Type does not have the as_any function");
	return (type->as_any(instance));
}
