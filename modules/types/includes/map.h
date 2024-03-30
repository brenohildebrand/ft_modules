/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 20:25:50 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 01:23:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "types.h"

# define MAP_INITIAL_CAPACITY 16

typedef struct s_map		*t_map;
typedef struct s_map_entry	*t_map_entry;

struct s_map {
	t_map_entry	*content;
	t_i32		size;
	t_i32		capacity;
};

struct s_map_entry {
	t_any	key;
	t_any	value;
};

t_type		map(void);
t_map		map_create(void);
void		map_destroy(t_map instance);
void		map_expand(t_map instance);
t_i32		map_hash_key(t_any key);
t_bool		map_are_keys_equal(t_any key, t_any another_key);
void		map_set(t_map map, t_any key, t_any value);
void		map_set_by_index(t_map map, t_i32 index, t_any value);

t_type		map_entry(void);
t_map_entry	map_entry_create(void);
void		map_entry_destroy(t_map_entry instance);

// the key
// is an any that represents a number the same as the number?

// the value can be anything
// the key can be a primitive or an instance. It will be compared like that
// so i32_to_any(42) is indeed the same as 42 as a key.

#endif