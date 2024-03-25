/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:32:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 16:20:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Pushes a value to the end of a structure. 
 * 
 * @param instance The instance to push the value onto.
 * @param value The value to push.
*/
void	push(void *instance, t_any value)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->push != NULL, "Type does not have the push function");
	type->push(instance, value);
}
