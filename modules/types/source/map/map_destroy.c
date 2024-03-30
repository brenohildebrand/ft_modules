/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:02:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 22:06:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_destroy(t_map instance)
{
	t_i32	i;

	if (instance == NULL)
	{
		return ;
	}
	i = 0;
	while (i < instance->capacity)
	{
		map_entry_destroy(instance->content[i]);
		i++;
	}
	delete(instance);
}
