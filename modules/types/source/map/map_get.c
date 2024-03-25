// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   map_get.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/02/23 03:25:05 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/02/23 14:40:06 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "map.h"

// static t_any	get_using_linear_probing(t_list list, t_any key, t_i32 index)
// {
// 	t_i32		counter;
// 	t_map_entry	current_entry;

// 	counter = 0;
// 	while (counter != list->max_length)
// 	{
// 		current_entry = any_as_instance(list_get(list, i32_to_any(index)));
// 		if (current_entry->key == NULL)
// 		{
// 			map_key_destroy(key);
// 			return (NULL);
// 		}
// 		else if (map_are_keys_equal(current_entry->key, key))
// 		{
// 			map_key_destroy(key);
// 			return (current_entry->value);
// 		}
// 		else
// 		{
// 			index++;
// 			if (index == list->max_length)
// 				index = 0;
// 		}
// 		counter++;
// 	}
// 	return (NULL);
// }

// t_any	map_get(t_map instance, t_any key)
// {
// 	t_list	list;
// 	t_i32	hash;
// 	t_i32	index;

// 	list = map_get_list(key);
// 	hash = map_hash(key);
// 	index = hash % list->max_length;
// 	return (get_using_linear_probing(list, key, index));
// }