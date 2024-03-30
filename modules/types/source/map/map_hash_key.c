/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_hash_key.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:34:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 22:36:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"

t_i32	map_hash_key(t_any key)
{
	t_i32	i;
	t_i32	hash;

	hash = 5381;
	i = 0;
	while (i < sizeof(union u_any))
	{
		hash = ((hash << 5) + hash) + ((t_u8 *)(&key->value))[i];
		i++;
	}
	return (hash);
}
