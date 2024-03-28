/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:39:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:42:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"

t_type	any(void)
{
	static struct s_type	type = {
		.name = "any",
		.size = sizeof(struct s_any),
		.create = (void *(*)(void))any_create,
		.destroy = (void (*)(void *))any_destroy,
	};

	return (&type);
}
