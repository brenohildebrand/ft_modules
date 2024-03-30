/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:00:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 22:01:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	map_create(void)
{
	t_map	instance;

	instance = new(map);
	instance->size = 0;
	instance->capacity = 16;
	instance->content = \
		(t_map_entry *)allocate(instance->capacity * sizeof(t_map_entry));
	return (instance);
}
