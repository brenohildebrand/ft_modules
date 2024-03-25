/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:31:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:37:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Starts with an accumulator and goes through each element updating its value.
 * Returns the final value of the accumulator.
 * 
 * @param instance The instance to call reduce on.
 * @param accumulator The initial value of the accumulator.
 * @param callback The callback to use for each value. It receives the
 * 				   the current value, the accumulator and the index.
*/
t_any	reduce(
	void *instance,
	t_any accumulator,
	t_any (*callback)(t_any, t_any, t_i32)
){
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->reduce != NULL, "Type does not have the reduce function");
	return (type->reduce(instance, accumulator, callback));
}
