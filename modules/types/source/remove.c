/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:19:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 17:28:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Removes an element from the instance. 
 * 
 * @param instance The instance to remove the value from.
 * @param key The key to identify the value to be removed.
 */
t_any	remove(void *instance, t_any key)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->remove != NULL, "Type does not have the remove function.");
	return (type->remove(instance, key));
}
