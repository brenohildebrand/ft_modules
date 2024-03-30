/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:46:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 23:58:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"

void	map_set(t_map map, t_any key, t_any value)
{
	t_i32	hash;
	t_i32	index;

	hash = map_hash_key(key);
	index = hash % map->capacity;
	if (map->size + 1 >= map->capacity / 3)
	{
		map_expand(map);
	}
	while (1)
	{
		if (map->content[index] == NULL)
		{
			map->content[index] = map_entry_create();
			map->content[index]->key = key;
			map->content[index]->value = value;
			map->size++;
			return ;
		}
		else if (map_are_keys_equal(key, map->content[index]->key))
		{
			map->content[index]->value = value;
			return ;
		}
		index++;
		if (index == map->capacity)
			index = 0;
	}
}
