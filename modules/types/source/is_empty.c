/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:39:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:43:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Check if all the elements are NULL.
 * 
 * @param instance The instance to be checked.
*/
t_i32	is_empty(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->is_empty != NULL, "Type does not have the is_empty function");
	return (type->is_empty(instance));
}
