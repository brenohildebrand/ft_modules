/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_length.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:11:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 20:33:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Returns the length of the instance.
 * 
 * @param instance The instance to get the length from.
*/
t_i32	get_length(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(\
		type->get_length != NULL, \
		"Type does not have the get_length function");
	return (type->get_length(instance));
}
