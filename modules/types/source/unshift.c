/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unshift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:15:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 16:24:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Inserts a value at the beginning of the structure.
 * 
 * @param instance The instance to unshift onto.
 * @param value The value to insert.
 */
void	unshift(void *instance, t_any value)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->unshift != NULL, "Type does not have the unshift function.");
	type->unshift(instance, value);
}
