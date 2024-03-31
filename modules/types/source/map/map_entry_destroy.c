/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_entry_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:24:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 18:55:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"
#include "any.h"

void	map_entry_destroy(t_map_entry instance)
{
	if (instance == NULL)
		return ;
	any_destroy(instance->key);
	any_destroy(instance->value);
	delete(instance);
}
