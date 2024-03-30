/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_expand.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 00:03:07 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 15:05:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"

void	map_expand(t_map instance)
{
	t_map_entry	*old_content;
	t_i32		old_capacity;
	t_i32		i;

	old_capacity = instance->capacity;
	old_content = instance->content;
	instance->capacity = instance->capacity * 2;
	instance->content = \
		(t_map_entry *)allocate(instance->capacity * sizeof(t_map_entry));
	instance->size = 0;
	i = 0;
	while (i < old_capacity)
	{
		if(old_content[i] != NULL)
		{
			map_set(instance, old_content[i]->key, old_content[i]->value);
			deallocate(old_content[i]);
		}
		i++;
	}
	deallocate(old_content);
}
