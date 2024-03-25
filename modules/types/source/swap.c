/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:57:02 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 18:59:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Swaps the values on the given keys.
 * 
 * @param instance The instance to swap on.
 * @param key A key.
 * @param another_key Another key.
*/
void	swap(void *instance, t_any key, t_any another_key)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->swap != NULL, "Type does not have the swap function");
	type->swap(instance, key, another_key);
}
