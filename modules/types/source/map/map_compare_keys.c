// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   map_compare_keys.c                                 :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/03/11 19:00:40 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/03/11 19:00:58 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "map.h"

// static t_i32	are_values_the_same(t_any key, t_any another_key)
// {
// 	t_i32	i;

// 	i = 0;
// 	while (i < (int)(sizeof(union u_any)))
// 	{
// 		if (((unsigned char *)(&key->value))[i] != 
// 			((unsigned char *)(&another_key->value))[i])
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

// t_i32	map_compare_keys(t_any key, t_any another_key)
// {
// 	t_i32	i;
// 	t_i8	*key_sequence;
// 	t_i8	*another_key_sequence;

// 	if (key->type != another_key->type)
// 	{
// 		return (0);
// 	}
// 	else if (key->type == i8_sequence())
// 	{
// 		i = 0;
// 		key_sequence = key->value.sequence;
// 		another_key_sequence = another_key->value.sequence;
// 		while (key_sequence[i] == another_key_sequence[i] && key_sequence[i])
// 			i++;
// 		if (key_sequence[i] == another_key_sequence[i] && !key_sequence[i])
// 			return (1);
// 		return (0);
// 	}
// 	else if (are_values_the_same(key, another_key))
// 	{
// 		return (1);
// 	}
// 	return (0);
// }