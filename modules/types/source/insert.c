/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:26:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 17:18:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Inserts a key-value pair into the instance. This key-value pair could be
 * just an index and a value for some structures.
 * 
 * @param instance The instance to insert the key-value pair into.
 * @param key The key, which could be just an index converted to any.
 * @param value The value.
*/
void	insert(void *instance, t_any key, t_any value)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->insert != NULL, "Type does not have the insert function.");
	type->insert(instance, key, value);	
}
