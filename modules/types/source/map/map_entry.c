/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_entry.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:22:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 01:24:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "map.h"

t_type	map_entry(void)
{
	static struct s_type	type = {
		.name = "map_entry",
		.size = sizeof(struct s_map_entry),
		.create = (t_pointer (*)(void))map_entry_create,
		.destroy = (void (*)(t_pointer))map_entry_destroy
	};

	return (&type);
}
