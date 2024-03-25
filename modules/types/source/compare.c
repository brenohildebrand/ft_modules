/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:34:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 16:01:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Compares two instances. The instances must be of the same type.
 * 
 * @param instance The first instance to compare.
 * @param another_instance The second instance to compare.
 * @return A negative number if the first instance is less than the second,
 * zero if they are equal, and a positive number if the first instance is
 * greater than the second.
*/
t_i32	compare(void *instance, void *another_instance)
{
	t_type	type;
	t_type	another_type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	another_type = memtree_search(another_instance);
	assert(another_type != NULL, "Instance does not have a type.");
	if (type != another_type)
	{
		error("No way! You can't compare instances from two different types.");
	}
	assert(type->compare != NULL, "Type does not have the compare function.");
	return (type->compare(instance, another_instance));
}
