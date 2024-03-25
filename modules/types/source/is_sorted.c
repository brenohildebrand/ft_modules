/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:46:50 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:47:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Check if the elements are in ascending order.
 * 
 * @param instance The instance to be checked.
*/
t_i32	is_sorted(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(\
		type->is_sorted != NULL, \
		"Type does not have the is_sorted function");
	return (type->is_sorted(instance));
}
