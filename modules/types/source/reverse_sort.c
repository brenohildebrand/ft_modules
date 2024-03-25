/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:19:32 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:20:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Sorts in decreasing order.
 * 
 * @param instance The instance to be sorted.
*/
void	reverse_sort(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(\
		type->reverse_sort != NULL, \
		"Type does not have the reverse_sort function");
	type->reverse_sort(instance);
}
