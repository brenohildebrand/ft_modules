/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_full.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:41:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:43:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Check if none of the elements are NULL.
 * 
 * @param instance The instance to be checked.
*/
t_i32	is_full(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->is_full != NULL, "Type does not have the is_full function");
	return (type->is_full(instance));
}
