/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:59:18 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 22:00:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_type	map(void)
{
	static struct s_type	type = {
		.name = "map",
		.size = sizeof(struct s_map),
		.create = (t_pointer (*)(void))map_create,
		.destroy = (void (*)(t_pointer))map_destroy
	};

	return (&type);
}
