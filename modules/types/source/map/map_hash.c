// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   map_hash.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/02/22 23:04:56 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/02/23 23:47:47 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "map.h"

// // -- According to ChatGPT this hash algorithm is called 'djb2'.
// static t_i32	hash_for_value(t_any key)
// {
// 	int	i;
// 	int	hash;

// 	hash = 5381;
// 	i = 0;
// 	while (i < (int)(sizeof(union u_any)))
// 	{
// 		hash = ((hash << 5) + hash) + ((unsigned char *)(&key->value))[i];
// 		i++;
// 	}
// 	return (hash);
// }

// static t_i32	hash_for_sequence(t_any key)
// {
// 	t_i32	i;
// 	t_i32	hash;
// 	t_i8	*sequence;

// 	if (key->type == i8_sequence())
// 	{
// 		i = 0;
// 		hash = 5381;
// 		sequence = key->value.sequence;
// 		while (sequence[i])
// 		{
// 			hash = ((hash << 5) + hash) + sequence[i];
// 			i++;
// 		}
// 		return (hash);
// 	}
// 	else
// 	{
// 		error("Go to map_hash and finish the implementation.");
// 	}
// 	return (0);
// }

// static t_i32	hash_for_instance(t_any key)
// {
// 	int	i;
// 	int	hash;

// 	hash = 5381;
// 	i = 0;
// 	while (i < (int)(sizeof(void *)))
// 	{
// 		hash = ((hash << 5) + hash) + key->value.buffer[i];
// 		i++;
// 	}
// 	return (hash);
// }

// int	map_hash(t_any key)
// {
// 	if (key->type->is_value)
// 	{
// 		return (hash_for_value(key));
// 	}
// 	else if (key->type->is_sequence)
// 	{
// 		return (hash_for_sequence(key));
// 	}
// 	else if (key->type->is_instance)
// 	{
// 		return (hash_for_instance(key));
// 	}
// 	else
// 	{
// 		error("I have no idea how to hash this.");
// 	}
// 	return (0);
// }
