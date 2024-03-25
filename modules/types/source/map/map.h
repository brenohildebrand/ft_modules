// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   map.h                                            :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/02/22 22:15:08 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/02/23 23:48:13 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #ifndef MAP_H
// # define MAP_H

// // So the map will be first a hashed list for each type
// // and then a list for each type and then a linked list

// // if the linked list grows too much or the list grows too much
// // rehash everything

// typedef struct s_map			*t_map;
// typedef struct s_map_entry		*t_map_entry;

// struct s_map {
// 	t_list	lists;
// };

// struct s_map_entry {
// 	t_any	key;
// 	t_any	value;
// };


// t_type		map(void);
// t_map		map_create(void);
// void		map_destroy(t_map instance);
// t_map		map_copy(t_map instancce);
// t_i32		map_hash(t_any key);
// t_i32		map_compare_keys(t_any key, t_any another_key);
// void		map_set(t_map instance, t_any key, t_any value);
// t_any		map_get(t_map instance, t_any value);
// t_i32		map_get_length(t_map instance);
// t_any		map_as_any(t_map instance);
// t_any		map_to_any(t_map instance);

// t_type		map_entry(void);
// t_map_entry	map_entry_create(void);
// void		map_entry_destroy(t_map_entry instance);

// #endif