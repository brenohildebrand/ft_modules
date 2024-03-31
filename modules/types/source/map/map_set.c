/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:46:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 20:40:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"
#include "i32.h"
#include "any.h"
#include <stdio.h>

static void	helper(t_i32 index, t_map map, t_any key, t_any value)
{
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
			any_destroy(map->content[index]->value);
			any_destroy(key);
			map->content[index]->value = value;
			return ;
		}
		index++;
		if (index == map->capacity)
			index = 0;
	}
}

void	map_set(t_map map, t_any key, t_any value)
{
	t_i32	hash;
	t_i32	index;

	if (map->size + 1 >= map->capacity / 3)
	{
		map_expand(map);
	}
	hash = map_hash_key(key);
	index = i32_abs(hash % map->capacity);
	helper(index, map, key, value);
}
