/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:34:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 18:53:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * The first element will become the last.
 * 
 * @param instance The instance to be rotated.
 */
void reverse_rotate(void *instance)
{
	t_type type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(\
		type->reverse_rotate != NULL, \
		"Type does not have the reverse_rotate function");
	type->reverse_rotate(instance);
}
