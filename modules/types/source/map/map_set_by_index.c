/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set_by_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:41:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 01:29:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"
#include "i32.h"

void	map_set_by_index(t_map map, t_i32 index, t_any value)
{
	map_set(map, i32_to_any(index), value);
}
