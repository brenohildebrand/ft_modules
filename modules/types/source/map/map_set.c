// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   map_set.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/02/22 23:07:25 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/02/23 14:39:52 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "map.h"

// void	map_set(t_map instance, t_any key, t_any value)
// {
// 	t_i32	hash;
	
// 	if (instance->length >= instance->max_length / 2)
// 	{
// 		map_expand(instance);
// 	}
// 	hash = abs(map_hash(key) % (instance->max_length));
// 	while (1)
// 	{
// 		if (instance->entries[hash].key == NULL)
// 		{
// 			instance->entries[hash].key = key;
// 			instance->entries[hash].value = value;
// 			instance->length++;
// 			break ;
// 		}
// 		else if (map_compare_keys(instance->entries[hash].key, key))
// 		{
// 			any_destroy(key);
// 			if (value == NULL)
// 			{
// 				instance->entries[hash].key = NULL;
// 				any_destroy(instance->entries[hash].value);
// 				instance->length--;
// 			}
// 			instance->entries[hash].value = value;
// 			break ;
// 		}
// 		else
// 		{
// 			hash++;
// 		}
// 	}
// }

// void	map_set(t_map instance, t_any key, t_any value)
// {
// 	t_list		list;
// 	t_i32		hash;
// 	t_i32		index;
// 	t_map_entry	new_entry;
// 	t_map_entry current_entry;

// 	list = map_get_list(key);
// 	hash = map_hash(key);
// 	if (list->length == list->max_length)
// 	{
// 		list_resize(list->length * 2);
// 		list_inflate(list);
// 		map_rehash(instance, list);
// 	}
// 	index = hash % get_length(list);
// 	new_entry = map_entry_create();
// 	new_entry->key = key;
// 	new_entry->value = value;
// 	while (1)
// 	{
// 		current_entry = list_get(i32_to_any(index));
// 		if (current_entry->key == NULL)
// 		{

// 		}
// 		else if (map_compare_keys(current_entry, new_entry))
// 		{

// 		}
// 		else
// 		{

// 		}
// 		index++;
// 		if (index == list->length)
// 			index = 0;
// 	}
// 	set(list, i32_to_any(hash % get_length(list)), value);
// }
