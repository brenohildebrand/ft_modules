/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:46:32 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 15:57:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Copies an instance by looking up its type and calling the type's copy 
 * function.
 * 
 * @param instance The instance to copy.
 * @return A copy of the instance.
 */
void	*copy(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->copy != NULL, "Type does not have the copy function.");
	return (type->copy(instance));
}
