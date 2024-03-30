/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:00:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 01:12:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"

t_any	map_get(t_map instance, t_any key)
{
	t_i32	hash;
	t_i32	index;
	
	hash = map_hash_key(key);
	index = hash % instance->capacity;
	while (1)
	{
		if (instance->content[index] == NULL)
		{
			return (NULL);
		}
		else if (map_are_keys_equal(key, instance->content[index]->key))
		{
			return (instance->content[index]->value);
		}
		index++;
		if (index == instance->capacity)
			index = 0;
	}
}
