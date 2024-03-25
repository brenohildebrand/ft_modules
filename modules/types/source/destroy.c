/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 00:26:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 15:57:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Destroys an instance by looking up its type and calling the associated
 * destroy function.
 *
 * @param instance The instance to destroy.
 */
void	destroy(void *instance)
{
	t_type type;

	type = memtree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->destroy != NULL, "Type does not have the destroy function.");
	type->destroy(instance);
}
