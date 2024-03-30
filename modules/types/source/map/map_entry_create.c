/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_entry_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:25:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 01:27:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"

t_map_entry	map_entry_create(void)
{
	t_map_entry	instance;

	instance = new(map_entry);
	instance->key = NULL;
	instance->value = NULL;
	return (instance);
}
