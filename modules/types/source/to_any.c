/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:33:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 20:37:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Converts the type to any and returns it.
 * 
 * @param instance The instance to convert.
*/
t_any	to_any(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->to_any != NULL, "Type does not have the to_any function");
	return (type->to_any(instance));
}
