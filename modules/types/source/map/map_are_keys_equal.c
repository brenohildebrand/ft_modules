/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_are_keys_equal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:13:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 20:31:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_bool	map_are_keys_equal(t_any key, t_any another_key)
{
	t_i32	i;

	if (key->type != another_key->type)
	{
		return (FALSE);
	}
	i = 0;
	while (i < (t_i32) sizeof(union u_any))
	{
		if (((t_u8 *)&key->value)[i] != ((t_u8 *)&another_key->value)[i])
		{
			return (FALSE);
		}
		i++;
	}
	return (TRUE);
}
