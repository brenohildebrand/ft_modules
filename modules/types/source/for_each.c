/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_each.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:22:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:25:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Runs the callback for each value of the instance. The callback receives the 
 * value and the index as parameters.
 * 
 * @param instance The instance to go through.
 * @param callback The callback to run for each element.
*/
void	for_each(void *instance, void (*callback)(t_any, t_i32))
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->for_each != NULL, "Type does not have the for_each function");
	type->for_each(instance, callback);
}
