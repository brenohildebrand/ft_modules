/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:32:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 20:34:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Returns the size of the instance. It means the number of elements that are 
 * not NULL.
 * 
 * @param instance The instance to get the size from.
*/
t_i32	get_size(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->get_size != NULL, "Type does not have the get_size function");
	return (type->get_size(instance));
}
