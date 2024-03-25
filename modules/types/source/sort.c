/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:17:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 19:19:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Sorts in increasing order.
 * 
 * @param instance The instance to be sorted.
*/
void	sort(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->sort != NULL, "Type does not have the sort function");
	type->sort(instance);
}
