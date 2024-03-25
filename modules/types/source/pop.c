/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:53:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 16:22:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Pops the value at the end of the structure and returns it.
 * 
 * @param instance The instance to pop the value from.
 * @return The value at the end of the structure.
*/
t_any	pop(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->pop != NULL, "Type does not have the pop function.");
	return(type->pop(instance));
}
