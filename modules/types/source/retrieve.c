/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retrieve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:25:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 17:31:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Retrieves a value from the instance using the given key. 
 * 
 * @param instance The instance to retrieve the value from.
 * @param key The key to find the value to be retrieved.
 */
t_any	retrieve(void *instance, t_any key)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->retrieve != NULL, "Type does not have the retrieve function.");
	return (type->retrieve(instance, key));
}
