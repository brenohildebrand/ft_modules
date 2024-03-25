/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_reverse_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:48:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:48:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Check if the elements are in descending order.
 * 
 * @param instance The instance to be checked.
*/
t_i32	is_reverse_sorted(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(\
		type->is_reverse_sorted != NULL, \
		"Type does not have the is_reverse_sorted function");
	return (type->is_reverse_sorted(instance));
}
