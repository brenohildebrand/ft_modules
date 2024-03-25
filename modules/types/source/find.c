/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:39:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:11:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_i32	find(void *instance, int (*callback)(t_any, int))
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->find != NULL);
	return (type->find(instance, callback));
}
