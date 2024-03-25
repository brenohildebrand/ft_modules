/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:21:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:12:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	*new(t_type (*signature)(void))
{
	t_u32	i;
	t_type	type;
	void	*instance;

	type = signature();
	instance = malloc(type->size);
	assert(instance != NULL);
	i = 0;
	while (i < type->size)
	{
		((t_u8 *)instance)[i] = 0;
		i++;
	}
	memtree_insert(type, instance);
	return (instance);
}
