/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:48:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:34:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "typetree.h"
#include "utils.h"

void	*new(t_type (*signature)(void))
{
	t_u32	i;
	t_type	type;
	void	*instance;

	type = signature();
	instance = malloc(type->size);
	assert(instance != NULL, "Wow! An error ocurred during a malloc.");
	i = 0;
	while (i < type->size)
	{
		((t_u8 *)instance)[i] = 0;
		i++;
	}
	typetree_insert(type, instance);
	return (instance);
}
