/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_each_with_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:25:56 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:29:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Runs the callback for each value of the instance. The callback receives the 
 * value, the index and the data as parameters.
 * 
 * @param instance The instance to go through.
 * @param callback The callback to run for each element.
 * @param data The data to pass to the callback.
*/
void	for_each_with_data(
	void *instance,
	void (*callback)(t_any, t_i32, void *),
	void *data
){
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(\
		type->for_each_with_data != NULL, \
		"Type does not have the for_each_with_data function");
	type->for_each_with_data(instance, callback, data);
}
