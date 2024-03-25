/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:07:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 18:34:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * The last element will become the first.
 * 
 * @param instance The instance to be rotated.
 */
void rotate(void *instance)
{
	t_type type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->rotate != NULL, "Type does not have the rotate function");
	type->rotate(instance);
}
